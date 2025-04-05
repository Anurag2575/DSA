#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
  int n = nums.size();
  int left = 0, right = n-1, k = n-1;
  vector<int> res(n);
  int leftSq = 0, rightSq = 0;

  while(left <= right){
    leftSq = nums[left]*nums[left];
    rightSq = nums[right]*nums[right];

    if(leftSq > rightSq){
      res[k--] = leftSq;
      left++;
    }else{
      res[k--] = rightSq;
      right--;
    }
  }

  return res;
}
