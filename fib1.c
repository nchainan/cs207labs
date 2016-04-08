#include <stdio.h>

int fib(int n){
  if(n == 1){
    return 0;
  }
  if(n == 2){
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

int main(int argc, char * argv[]){
  int n = 8;
  int result;

  result = fib(n);
  printf("Answer is %d", result);
}
