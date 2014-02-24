// try to generate a palindrome from to three digit numbers

#include <cstdio>
#include <string>

bool palindrome_check(int num);

bool three_dig_factor(int num);

int main(){
  
  int start = 998001; // the largest number formed by 3 digit num mult
  int smallest = 10000;

  
  for(start ; start > smallest ; start--){
    // check to see if the number is a palindrome
    if(palindrome_check(start)){
      //check to see if it can be factored into two three digit nums
      if(three_dig_factor(start))
	break; // kill the loop
    }
  }
  
  printf("Largest palindrome is: %d\n", start);
  return 0;

}

// this only works for six digit palindromes in base ten
bool palindrome_check(int number){

  if(number%10 != (number/100000)%10)
    return false;
  
  if((number/10)%10 != (number/10000)%10)
    return false;

  if((number/100)%10 != (number/1000)%10)
    return false;

  return true;
 
}

bool three_dig_factor(int num){
  int i;
  for(i = 999 ; i > 99 ; i--){
    if(num%i == 0  && num/i > 99 && num/i < 1000)
      return true;
  }
  return false;
}
