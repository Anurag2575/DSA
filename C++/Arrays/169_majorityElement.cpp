#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int cnt = 0;
    int el;
    for(int i = 0; i < nums.size(); i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }else if(nums[i] == el){
            cnt++;
        }else{
            cnt--;
        }
    }

    int cnt1 = count(nums.begin(), nums.end(), el);
    return (cnt1 > nums.size() / 2) ? el : -1;
}