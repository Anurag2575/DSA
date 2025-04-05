#include<bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target){
  int countLess = 0, countEqual = 0;
  vector<int> res;
  for(auto& i : nums){
    if(i < target) countLess++;
    else if(i == target) countEqual++;
  }
  for(int i = 0; i < countEqual; i++){
    res.push_back(countLess+i);
  }
  return res;
}

int main(){
  vector<int> arr = {1, 2, 5, 2, 3};
  int target = 2;
  vector<int> res = targetIndices(arr, target);
  for(auto& i : res){
    cout<<i<<" ";
    cout<<endl;
  }
}
