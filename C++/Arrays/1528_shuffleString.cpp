#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices){
  string res(s.size(), ' ');
  for(int i = 0; i < indices.size(); i++)
    res[indices[i]] = s[i];

  return res;
}
