#include <cstdio>

bool is_prime(long int num);

int main(){

  long int prime = 3; // start off with the first odd prime
  // count the number of primes
  int count = 1; //2 is the first prime, skip it
 
  while(1){

    if(is_prime(prime)){
      count++;
      if(count==10001)
	break;
    }
    prime+=2;
  }
  printf("The 10001 prime is: %d\n", prime);
  return 0;
}

//checks to see if a number is prime
bool is_prime(long int number){
  int i;
  for(i = 2 ; i < ((number/2) + 1) ; i++){
    if(number%i==0)
      return false;
  }
  return true;
}
