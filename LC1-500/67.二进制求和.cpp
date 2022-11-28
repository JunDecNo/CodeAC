#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int aLen = a.size(), bLen = b.size(), i, j, k;
        int Len = max(aLen, bLen);
        string res(Len,'0');
        for (i = aLen - 1, j = bLen - 1, k = Len-1; i >= 0 && j >= 0; i--, j--, k--) {
            res[k] = Add(a[i], b[j]);
        }
        if (i >= 0) {
            for (int p = i; p >= 0; p--,k--) {
                res[k] = a[p];
            }
        } else if (j >= 0) {
            for (int p = j; p >= 0; p--,k--) {
                res[k] = b[p];
            }
        }
        for (int k = Len-1; k >= 1; k--) {
            if (res[k] == '2')
                res[k] = '0';
            else if (res[k] == '3')
                res[k] = '1';
            else continue;
            res[k - 1] = Add(res[k - 1], '1');
        }
        
        if (res[0] == '3') {
            res[0] = '1';
            res.insert(res.begin(), '1');
        } else if (res[0] == '2') {
            res[0] = '0';
            res.insert(res.begin(), '1');
        }
        
        return res;
    }
    char Add(char a, char b) {
        if (a == '0' && b == '0')
            return '0';
        else if (a == '1' && b == '1')
            return '2';
        else if (a == '2' && b == '1')
            return '3';
        else
            return '1';
    }
};
int main() {
    Solution s;
    string a = "1", b = "111";
    cout << s.addBinary(a, b);
    return 0;
}