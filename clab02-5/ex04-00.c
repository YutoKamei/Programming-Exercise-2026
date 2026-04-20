#include<stdio.h>

int main(){
  int a = 10;	/* 初期化した変数a */
  int b;		/* 初期化していない変数b (VSCodeでエラー出るかも) */

  /* 初期化した変数aの値を出力 */
  printf("a = %d\n", a);
  /* 初期化していない変数bの値を出力 */
  printf("b = %d\n", b);
  return 0;
}
