#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, tmp;
        int p = m + n - 1;
        while (i >= 0 || j >= 0) {
            if (i == -1) {
                nums1[p] = nums2[j];
                j--;
            } else if (j == -1) {
                nums1[p] = nums1[i];
                i--;
            }
            else if (nums1[i] > nums2[j]) {
                nums1[p] = nums1[i];
                i--;
            } else{
                nums1[p] = nums2[j];
                j--;
            }
            p--;
        }
    }
};
int main() {
    vector<int>nums1({1,2,3,0,0,0}),nums2({2,5,6});
    Solution s;
    s.merge(nums1,3,nums2,3);
    for(int x:nums1)cout<<x<<" ";
    return 0;
}