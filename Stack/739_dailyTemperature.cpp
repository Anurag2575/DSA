#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temp) {
    int n = temp.size();
    stack<int> st;
    vector<int>res(n, 0);
    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && temp[i] >= temp[st.top()]){
            st.pop();
        }
        if(!st.empty()) res[i] = st.top() - i;
        st.push(i);
        }
    return res;
}