#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){
  return n > 0 && (n & (n-1)) == 0;
}
