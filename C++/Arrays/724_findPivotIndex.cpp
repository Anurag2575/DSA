#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
  int totalSum = 0, leftSum = 0;
  for(auto& i : nums)
    totalSum += i;

  for(int i = 0; i < nums.size(); i++){
    if(leftSum == totalSum - leftSum - nums[i]) return i;
    leftSum += nums[i];
  }
  return -1;
}
