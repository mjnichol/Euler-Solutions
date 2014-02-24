#include <stdio.h>

int main(){


  int check = 0; 
  int num = 2;
  int i;

  while(!check){
    for(i = 2; i < 21 ; i++){
      if(num%i!=0){
	check = 0;
	break;
      }
      else{
	check = 1;
      }	
    }
    num++;
  }
  num--;
  printf("smallest num is %d\n", num);
  return 0;
}
