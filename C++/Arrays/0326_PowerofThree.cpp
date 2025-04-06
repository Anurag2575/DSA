bool isPowerofThree(int n){
  if(n <= 0) return false;//negative numbers can never be the power of 3;

  while(n%3 == 0) n/=3;//divide number by 3 untill the remainder is not zero or the number is > 1
  return n == 1;//if all remainders are zero return true
}
