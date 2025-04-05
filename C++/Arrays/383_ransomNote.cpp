#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransom, string magazine){
  if(ransom.size() > magazine.size()) return false;
  unordered_map<char, int> mpp;
  for(auto& i : magazine) mpp[i]++;

  for(auto& i : ransom){
    if(mpp[i] <= 0) return false;
    mpp[i]--;
  }
  return true;
}
