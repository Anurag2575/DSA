#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mpp;
    int moreNeeded = 0;
    for(int i = 0; i < nums.size(); i++){
        moreNeeded = target - nums[i];
        if(mpp.find(moreNeeded) != mpp.end()) return {mpp[moreNeeded], i};
        mpp[nums[i]] = i;
    }
    return {-1, -1};
}