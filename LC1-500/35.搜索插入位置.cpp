#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int mid,left = 0, right = len - 1;
        while (left<=right) {
            mid=(left+right)/2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {  //小于
                left = mid + 1;
            }
            if(nums[mid]==target)return mid;
        }
        return left;
    }
};
int main() {
    return 0;
}