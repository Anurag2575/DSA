#include<vector>
using namespace std;

int binarysearch(vector<int>& nums, int target){
  int n = nums.size();
  int left = 0, right = n-1, mid = 0;
  while(left <= right){
    mid = left+(right-left)/2;//prevents overflow

    if(nums[mid] == target) return mid;//target is found and return the index
    else if(nums[mid] > target) right = mid - 1;//shift to left side for smaller values
    else left = mid + 1; //shift to right side for greater values
  }

  return -1;//if target is not found.
}
