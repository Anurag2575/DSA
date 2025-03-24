#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int>& height){
    int n = height.size();
    int i = 0, j = n - 1;
    int maxArea = 0;
    while(i < j){
        maxArea = max(maxArea, (j-i) * min(height[i], height[j]));
        if(height[i] < height[j]) i++;
        else j--;
    }
    return maxArea;
}