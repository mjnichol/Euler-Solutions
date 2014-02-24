#include <stdio.h>

int main(){

  long int sq_sum = 5050;
  sq_sum*=sq_sum;

  int i;
  for( i = 1 ; i < 101 ; i++)
    sq_sum-=i*i;

  printf("%d\n",sq_sum);
  return 0;
}
