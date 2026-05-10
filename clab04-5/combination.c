#include "kadai7-5.h"

unsigned int combination(int n, int m){
  int c;

  c = factorial(n)/( factorial(m)* factorial(n-m));

  return c;
}
