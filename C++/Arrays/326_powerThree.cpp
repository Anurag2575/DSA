#include<bits/stdc++.h>
using namespace std;

bool isPowerofThree(int n){
  while(n%3 == 0){
    n/=3;
  }
  return n == 1;
}
