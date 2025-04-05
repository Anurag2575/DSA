#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix){
  for(int i = 0; i < matrix.size(); i++)
    for(int j = i+1; j < matrix[0].size(); j++)
      swap(matrix[i][j], matrix[j][i]);
}

void rotateImage(vector<vector<int>>& matrix){
  transpose(matrix);
  for(auto& row : matrix)
    reverse(row.begin(), row.end());
}
