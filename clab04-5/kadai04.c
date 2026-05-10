/* 課題7-(4) */
#include <stdio.h>
#include <math.h>

double expmcl(int n);
long long factorial(int n);

int main (){
  double e;
  e = expmcl (10);
  printf("e = \t %.10lf\n", e);
  printf("exp(1) = %.10lf\n", exp(1.0));
  return 0;
}

double expmcl(int n){
  int i;
  double e = 1;
  for(i = 1; i <= n; i++){
    e += 1.0/ factorial(i);
    printf("e[%d] = %.10lf\n", i, e);
  }
  return e;
}

long long factorial(int n){
  int f = 1;
  int i;
  for(i = 1; i <= n; i++){
    f *= i;
  }
  return f;
}
