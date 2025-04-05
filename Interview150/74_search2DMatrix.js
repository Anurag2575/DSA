var searchMatrix = function(matrix, target) {
    let rows = matrix.length, cols = matrix[0].length;
    let row = 0, col = cols - 1;
    while(row < rows && col >= 0){
        if(matrix[row][col] == target) return true;
        else if(matrix[row][col] > target) col--;
        else row++;
    }
    return false;
};
