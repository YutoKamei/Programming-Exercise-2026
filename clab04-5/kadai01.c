/* 課題7-(1) */
#include <stdio.h>

double ctof(double c);
double ftoc(double f);

int main (){
  double f,c;

  f = 100.4; /* 華氏 */
  c = 100; /* 摂氏 */

  printf("摂氏%lfは,華氏%lfです。\n", c, ctof(c));
  printf("華氏%lfは,摂氏%lfです。\n", f, ftoc(f));

  return 0;
}

double ctof(double c){
  double f;
  f = (9./5)*c + 32;;
  return f;
}

double ftoc(double f){
  double c;
  c = (f - 32)*(5./9);
  return c;
}
