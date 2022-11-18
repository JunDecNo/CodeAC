#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int max = 0, len = 0;
        for (char ch : s) {
            if (ch == ' ') {
                if (len != 0)
                    max = len;
                len = 0;
            } else {
                len++;
            }
        }
        if (len != 0)
            max = len;
        return max;
    }
};
int main() {
    return 0;
}