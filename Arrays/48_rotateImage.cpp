#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void rotateImage(vector<vector<int>>& matrix){
    transpose(matrix);
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}