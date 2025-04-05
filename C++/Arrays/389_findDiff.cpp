#include<bits/stdc++.h>
using namespace std;

char findDiff(string s, string t){
    int tSum = 0, sSum = 0;
    
    for(auto& i : t) tSum += i;
    for(auto& i : s) sSum += i;

    return tSum = sSum;
}