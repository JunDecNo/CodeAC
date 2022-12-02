#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        else {
            int len = s.size(),si=numRows*2-2;
            string *res=new string[numRows];
            for (int i = 0; i < len; i++) {
                int tmp=i%(si);
                if(tmp<numRows){
                    res[tmp]+=s[i];
                }else{
                    res[si-tmp]+=s[i];
                }
            }
            string result;
            for(int i=0;i<numRows;i++){
                result+=res[i];
            }
            return result;
        }
    }
};
int main() {
    return 0;
}