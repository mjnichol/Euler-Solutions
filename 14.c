#include <stdio.h>

int collatz_len(long int start);

int main(){

  int largest_chain = 0;
  int num = 0;
  int len = 0;
  long int i; 

  for(i = 1 ; i < 999999 ; i++){

    len = collatz_len(i);
    if(len > largest_chain){
      num = i;
      largest_chain = len;
    }
  }

  printf("The largest collatz chain is %d and is caused by the number %d\n", largest_chain, num);

  return 0;
}

int collatz_len(long int start){

  int chain = 0;

  while(start!=1){
    chain++;
    if(start%2==0)
      start=start/2;    
    else
      start = 3*start + 1;
  }

  return chain;
}
