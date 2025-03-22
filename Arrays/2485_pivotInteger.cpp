#include<bits/stdc++.h>
using namespace std;

int pivotInteger(int n){
    int totalSum = 0;
    for(int i = 1; i <= n; i++) totalSum += i;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        if(sum == totalSum - sum + i) return i;
    }
    return -1;
}