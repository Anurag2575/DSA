#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
  int minPrice = INT_MAX, maxProfit = 0, profit = 0;

  for(auto& i : prices){
    minPrice = min(i, minPrice);
    profit = i - minPrice;
    maxProfit = max(profit, maxProfit);
  }
  return maxProfit;
}
