var twoSum = function(numbers, target){
    let i = 0, j = numbers.length - 1;
    let sum = 0;
    while(i < j){
        sum = numbers[i] + numbers[j];
        if(sum < target) i++;
        else if(sum > target) j--;
        else return [i+1, j+1];
    }
    return [-1, -1];
};

console.log(twoSum([2, 7, 11, 15], 9))