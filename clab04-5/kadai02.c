/* 課題7-(2) */
#include <stdio.h>

double power(int a, int b);

int main (){
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("%d^%d = %lf\n", a, b, power(a, b));
  return 0;
}

/* b == 0で,return 1.0しても可 */
double power(int a, int b){
  int i;
  double p = 1.0;
  if(b < 0){
    b = -b;
    for(i = 0; i < b; i++){
      p /= a;
    }
  }else{
    for(i = 0; i < b; i++){
      p *= a;
    }
  }
  return p;
}
