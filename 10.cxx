#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iostream>

// returns the number of primes
int sieve(int ceiling, int primes[]); 

int main(){

  int primes[2000000];
  for(int i = 0; i < 2000000 ; i++)
    primes[i]=0;
  
  double sum = 0;
  int num_primes;

  num_primes = sieve(2000000, primes); 

  // 1 is in the list, but is not prime
  for(int i = 1 ; i < num_primes; i++){
    sum+=primes[i];
  }
  std::cout.precision(20);
  std::cout<<"The sum is: "<<sum<<std::endl;
  return 0;
}

int sieve(int ceiling, int primes[]){
  
  // create the list of integers
  int * integers = (int *)malloc( ceiling * sizeof(int));
  for(int i = 0 ; i < ceiling ; i++){
    integers[i] = i;
  }

  // the starting prime
  int sieve = 2;
  // stop after this many iterations
  int stop = (int) sqrt(ceiling) + 1;

  while(sieve < stop){

    for(int j = 2*sieve; j < ceiling ; j+=sieve){
      integers[j] = 0;
    }
    // not perfect, but should work
    for(int k = 0 ; k < ceiling ; k++){
      if(integers[k] > sieve){
	sieve = integers[k];
	break;
      }
    }
  }

  int index = 0;
  for(int z = 0 ; z < ceiling ; z++){
    if(integers[z]){
      primes[index]=integers[z];
      index++;
    }
  }

  free (integers);
  return index;

}
