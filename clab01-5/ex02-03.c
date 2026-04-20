/*
  プログラミング演習 第1回(5限) 変数とデータ型，計算と式と演算子(例題)
  学籍番号:
  氏   名: 
 */
/* 実数表示確認のためのプログラム */
#include<stdio.h>

/* 12.345と1.23e-5を表示 */

int main(){
  printf("value = %f, %f\n", 12.345, 1.23e-5);
  printf("value = %e, %e\n", 12.345, 1.23e-5);
  printf("value = %E, %E\n", 12.345, 1.23e-5);
  printf("value = %g, %g\n", 12.345, 1.23e-5);
  printf("value = %G, %G\n", 12.345, 1.23e-5);

  return 0;
}
