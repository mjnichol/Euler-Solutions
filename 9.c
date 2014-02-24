#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

bool is_integer(float k){
  return std::floor(k) == k;
}

int main(){

  int a;
  int b;
  float c;

  for(a = 0 ; a < 501 ; a++){
    for(b = 0 ; b < 501 ; b++){
      c = sqrt(a*a + b*b);
      if( is_integer(c) ){
	if( a + b + (int) c == 1000){
	  printf("a,b, and c are: %d, %d, %d\n",a,b,(int) c);
	  break;
	}
      }
    }
  }

  
  printf("The product is: %d\n", a*b*(int) c);
  
  return 0;
}
