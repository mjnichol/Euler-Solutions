#include <cstdio>

int main(){

  long int prime; // start off with the first odd prime
  long int num = 600851475143; 
  long int num_dec = num;
  long int largest = 0;
  long int prime_test;

  bool check = true;

  for( prime = 3 ; prime < num ; prime+=2){
    
    // check to make sure the number is prime, if not skip
    for(prime_test = 3; prime_test < prime ; prime_test+=2){
      if(prime%prime_test==0){
	check=false;
	break;
      }
      
    } 

    //check for prime factors
    if(num%prime==0 && check){ 
      largest=prime;
      printf("largest prime is: %d\n", largest);
      num_dec=num_dec/largest;
    }
    check = true;
    if(num_dec==1)
      break;

  }
  
  printf("The largest prime factor is: %d\n", largest);
  return 0;
}
