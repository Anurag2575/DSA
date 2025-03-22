#include<bits/stdc++.h>
using namespace std;

int pivotInteger(vector<int>& nums){
    int totalSum = 0;
    for(auto& i : nums) totalSum+=i;
    int sum = 0;
    for(auto&i : nums){
        sum+=i;
        if(sum == totalSum - sum + i) return i;
        //2 X sum - i = totalSum
    }
    return -1;
}