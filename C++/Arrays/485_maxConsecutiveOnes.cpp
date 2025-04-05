#include<bits/stdc++.h>
using namespace std;

vector<int> maxConsecutiveOnes(vector<int>& nums){
  int cnt = 0, maxCnt = 0;
  for(int i = 0; i < nums.size(); i++){
    if(nums[i] == 1){
      cnt++;
      maxCnt = max(cnt, maxCnt);
    }
    else cnt = 0;
  }
  return maxCnt;
}
