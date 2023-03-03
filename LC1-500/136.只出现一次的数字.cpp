#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int idx:nums){
            res^=idx;
        }
        return res;
    }
};//异或的重要性质
int main() {
    return 0;
}