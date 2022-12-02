#include<iostream>
#include<sstream>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        stringstream liu(s);
        int n=0;
        liu>>n;
        return n;
    }
};
int main(){
    return 0;
}