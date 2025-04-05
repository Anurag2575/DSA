#include<bits/stdc++.h>
using namespace std;

string defangingIP(string address){
    string res;
    for(const auto& i : address){
        if(i != '.') res.push_back(i);
        else res+="[.]";
    }
    return res;
}