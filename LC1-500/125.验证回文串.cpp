#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        for(int f=0,e=s.size()-1;f<=e; ){
            char front=s[f],end=s[e];
            if(isLetter(front)&&isLetter(end)){
                if(BeLittle(front)==BeLittle(end)){
                    f++;e--;
                }else return false;
            }
            else if(!isLetter(front))f++;
            else if(!isLetter(end))e--;
        }
        return true;
    }
    bool isLetter(char ch){
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))return true;
        else return false;
    }
    char BeLittle(char ch){
        if(ch>='A'&&ch<='Z')return (char)(ch+32);
        else return ch;
    }
};
int main() {
    return 0;
}