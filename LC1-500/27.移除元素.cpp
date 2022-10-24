#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int last=-1;
        for(int i=0;i<len;i++){
            if(val!=nums[i]){
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
    s.removeElement(nums,1);
    for(int s:nums)cout<<s<<endl;
    return 0;
}