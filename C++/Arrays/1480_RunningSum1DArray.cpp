#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums){
  int n = nums.size();
  vector<int> prefix(n, 0);
  prefix[0] = nums[0];
  for(int i = 1; i < nums.size(); i++)
    prefix[i] = prefix[i-1] + nums[i];

  return prefix;
}
