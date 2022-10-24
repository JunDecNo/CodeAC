#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int last=0;
        for(int i=1;i<len;i++){
            if(nums[last]!=nums[i]){
                last++;
                nums[last]=nums[i];
            }
        }
        return last+1;
    }
};

int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    Solution s;
    s.removeDuplicates(nums);
    for(int s:nums)cout<<s<<endl;
    return 0;
}