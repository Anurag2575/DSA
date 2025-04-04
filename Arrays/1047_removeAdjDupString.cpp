#include<bits/stdc++.h>
using namespace std;

string removeDup(string s){
  string res;
  for(auto& c : s){
    if(!res.empty() && res.back() == c){
      res.pop_back();
    }else{
      res.push_back(c);
    }
  }
  return res;
}
