#include <stdio.h>

int main(){
  
  int t1 = 1;
  int t2 = 2;
  int temp;
  int sum = 0;

  sum+=t2;
  while(t2 < 4000001){
    
    temp = t2 + t1;
    if(temp%2 == 0)
      sum+=temp;
    t1 = t2;
    t2 = temp;
  }

  printf("The sum is: %d\n", sum);

}
