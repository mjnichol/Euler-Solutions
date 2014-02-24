#include <cstdio>
#include <iostream>
#include <cinttypes>

// Note: this algorithm is super slow, but works. See the problem page
// for a detailed solution

int main(){

  int i;
  uint32_t j = 1;
  uint32_t tri_num = 0;
  int count = 0; // count the number of divisors

  while(count < 501){
    
    count = 1;
    tri_num+=j;    
    for(i = 1 ; i < (tri_num/2)+1 ; i++){
      if(tri_num%i==0)
	count++;
    }
    j++;
  }

  //  printf("The triangle number is: %d\nThe number of divisors is: %d\n", tri_num, count);
  std::cout.precision(20);
  std::cout<<"The triangle number is: "<<tri_num<<" and the number of divisors is: "<<count<<std::endl;

  return 0;
}
