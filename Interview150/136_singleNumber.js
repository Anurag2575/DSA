var singleNumber = function(nums){
  let xorr = nums[0];
  for(let i = 1; i < nums.length; i++)
    xorr ^= nums[i];
  return xorr;
}
