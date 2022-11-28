#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        digits[len-1]++;
        for(int i=len-1;i>=1;i--){
            if(digits[i]>9){
                digits[i]-=10;
                digits[i-1]++;
            }else{
                return digits;
            }
        }
        if(digits[0]>9){
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
int main() {
    return 0;
}