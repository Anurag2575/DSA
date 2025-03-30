#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
  int minPrice = INT_MAX, max_profit = 0;
  for(int i : prices){
    minPrice = min(minPrice, i);
    max_profit = max(max_profit, i - minPrice);
  }
  return max_profit;
}
