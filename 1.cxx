#include <cstdio>

int main(){

  int num;
  int sum = 0;
  for(num = 0; num < 1000 ;  num++){
    if(num%3==0 || num%5==0)
      sum+=num;
  }
  printf("sum is: %d\n", sum);

}
