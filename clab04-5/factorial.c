#include "kadai7-5.h"

unsigned int factorial(int n){
  int i;
  int f = 1;
  for(i = 1; i <= n; i++){
    f *= i;
  }
  return f;
}
