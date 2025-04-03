#include<bits/stdc++.h>
using namespace std;

vector<int> relativesort(vector<int>& ar1, vector<int>& arr2){
  unordered_map<int, int> mpp;
  vector<int> res;

  for(auto& i : arr1)
    mpp[i]++;

  for(auto& i : arr2){
    while(mpp[i] > 0){
      res.push_back(i);
      mpp[i]--;
    }
  }

  vector<int> remain;
  for(auto& [num, freq] : mpp){
    while(freq-- > 0){
      remain.push_back(num);
    }
  }

  sort(remain.begin(), remain.end());
  res.insert(res.end(), remain.begin(), remain.end());

  return res;
}
