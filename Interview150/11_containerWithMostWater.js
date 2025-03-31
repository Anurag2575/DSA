var maxArea = function(height){
  let i = 0, j = height.lenght-1, maxArea = 0;
  while(i < j){
    maxArea = Math.max(maxArea, (j-i)*Math.min(height[i], height[j]));
    if(height[i] < height[j]) i++;
    else j--;
  }
  return maxArea;
}
