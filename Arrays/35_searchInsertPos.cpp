#include<bits/stdc++.h>
using namespace std;

int searchIndex(vector<int>& nums, int target){
  int left = 0, right = nums.size()-1, mid = 0;

  while(left <= right){
    mid = (left+right)/2;

    if(nums[mid] == target) return mid;
    else if(nums[mid] > target) right = mid - 1;
    else left = mid + 1;
  }
  return left;
}
