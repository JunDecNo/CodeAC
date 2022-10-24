#include<iostream>
#include<vector> 
using namespace std; 

class Solution {
public:
    static vector<int> runningSum(vector<int>& nums) {
    	vector<int>result;
    	int x;
    	for(int i=0;i<nums.size();i++){
    		x+=nums[i];
    		result.push_back(x);
		}
		return result;
    }
};

int main(){
//	Solution s=new Solution();
	vector<int> x;
	for(int i=0;i<5;i++){
		x.push_back(1);
	}
	Solution::runningSum(x);
	return 0;
}
