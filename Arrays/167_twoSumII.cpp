#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum2(vector<int>& nums, int target){
    int n = nums.size(), sum = 0;
    int i = 0, j = n - 1;
    while(i < j){
        sum = nums[i] + nums[j];
        if(sum == target) return {i+1, j+1};
        if(sum < target) i++;
        else j--;
    }
    return {-1, -1};
}