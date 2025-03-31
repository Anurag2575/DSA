var rotate = function(matrix){

  for(let i = 0; i < matrix.lenght; i++){
    for(let j = i+1; j < matrix[0].lenght; j++){
      [matrix[i][j], matrix[j][i]] = [matrix[j][i], matrix[i][j]];
    }
  }
  for(let i = 0; i < matrix.length; i++){
    matrix[i].reverse();
  }
};
