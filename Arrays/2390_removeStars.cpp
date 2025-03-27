#include<bits/stdc++.h>
using namespace std;

string removeStars(string s){
    string result;
    for(const auto& i : s){
        if(i == '*'){
            if(!result.empty()) result.pop_back();
        }else{
            result.push_back(i);
        }
    }
    return result;
}