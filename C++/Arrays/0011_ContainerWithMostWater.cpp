#include<vector>
using namespace std;

int maxArea(vector<int>& height){
  int n = height.size();
  int i = 0, j = n-1;//two pointer from left(i) and right(j)
  int area = 0, maxarea = 0;

  while(i < j){
    area = (j-i) * min(height[i], height[j]);//calculate area between i and j
    maxarea = max(maxarea, area);

    if(height[i] < height[j]) i++;
    else j--;
  }

  return maxarea;
}
