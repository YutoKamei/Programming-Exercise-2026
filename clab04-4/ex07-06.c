/* 四則演算の関数 */

#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int add(int a, int b); /* 足し算 */
int sub(int a, int b); /* 引き算 */
int mul(int a, int b); /* かけ算 */
double div(int a, int b); /* 割り算 */

int main (){
  /* add関数の呼び出し */
  printf("1+2 = %d\n", add(1, 2));
  printf("3+4+5 = %d\n", add(add(3, 4), 5));
  printf("6+7+8+9 = %d\n", add(add(6, 7), add(8, 9)));

  /* sub関数の呼び出し */
  printf("9-7 = %d\n", sub(9, 7));
  printf("1-2 = %d\n", sub(1, 2));

  /* mul関数の呼び出し */
  printf("1*1 = %d\n", mul(1, 1));
  printf("2*2 = %d\n", mul(2, 2));
  printf("1*2*3 = %d\n", mul(mul(1, 2), 3));

  /* div関数の呼び出し */
  /* 小数点以下の結果を得るためには,divのみ実数を戻り値にする必要 */
  printf("10/5 = %lf\n", div(10, 5));
  printf("2/0 = %lf\n", div(2, 0));
  printf("1/2 = %lf\n", div (1 ,2));
  return 0;
}

int add(int a, int b){
  int x;
  x = a + b;
  return x;
}

int sub(int a, int b){
  int x;
  x = a - b;
  return x;
}

int mul(int a, int b){
  int x;
  x = a * b;
  return x;
}

double div(int a, int b){
  /* 注意:bが0のときはゼロ除算でここでは-1を返す */
  if(b == 0){
    return -1;
  }
  double x;
  x = (double)a/b;
  return x;
}
