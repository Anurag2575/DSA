#include<bits/stdc++.h>
using namespace std;

int mostWater(vector<int>& heights){
    int left = 0, right = heights.size() - 1;
    int maxWater = 0;
    while(left < right){
        maxWater = max(maxWater, (right - left)*min(heights[left], heights[right]));
        if(heights[left] < heights[right]) left++;
        else right--;
    }
    return maxWater;
}