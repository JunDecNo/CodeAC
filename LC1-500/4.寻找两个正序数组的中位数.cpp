#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size(), size2 = nums2.size();
    bool isJ=(size1+size2)%2;
    int mid = (size1 + size2) / 2;
    int i = 0, j = 0, k = 0,b=0;
    double res;
    while (i < size1 || j < size2) {
      if(i==size1){
        b=nums2[j];
        j++;
      }else if(j==size2){
        b=nums1[i];
        i++;
      }else if (nums1[i] < nums2[j]) {
        b=nums1[i];
        i++;
      } else {
        b=nums2[j];
        j++;
      }
      k++;
      if (k == mid){
        if(isJ){
          if(i<size1&&j<size2){
            res=min(nums1[i],nums2[j]);
          }else if(i==size1){
            res = nums2[j];
          }else{
            res = nums1[i];
          }
        }else{
          if(i<size1&&j<size2){
            res=(b+min(nums1[i],nums2[j]))/2.0;
          }else if(i==size1){
            res=(b+nums2[j])/2.0;
          }else{
            res=(b+nums1[i])/2.0;
          }
        }
        break;
      }else if(k>mid){
        res=b;
        break;
      }
    }
    return res;
  }
};
int main() {
  vector<int> nums1 = {1}, nums2 = {};
  Solution s;
  cout << s.findMedianSortedArrays(nums1, nums2);
  return 0;
}