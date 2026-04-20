/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 
   教科書 p.57 2つめのプログラム
   紛らわしいif文の書き方
   xに-1.0，5.0, 10.1をキーボードから入力したときに
   どういう出力になるか考えよう。
 */

#include<stdio.h>

int main(){
  double x;
  
  scanf("%lf", &x);

  if(x > 0.0)
  if(x > 10.0)
	printf("Condition A.\n");
  else
	printf("Condition B.\n");
	  
  return 0;
}
