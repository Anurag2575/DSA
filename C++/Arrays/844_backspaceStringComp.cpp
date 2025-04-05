#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t){
  string newS, newT;

  for(auto& c : s){
    if(c == '#'){
      if(!newS.empty()) newS.pop_back();
    }else newS.push_back(c);
  }

  for(auto& c : t){
    if(c == '#'){
      if(!newT.empty()) newT.pop_back();
    }else newT.push_back(c);
  }

  return newS == newT;
}
