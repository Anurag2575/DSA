#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int j = 0;
    for(int i = 0; i < nums.size(); i++)
        if(nums[i] != nums[j])
            swap(nums[i], nums[++j]);

    return j+1;
}