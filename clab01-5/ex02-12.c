/*
  プログラミング演習 第1回(5限) 変数とデータ型，計算と式と演算子(例題)
  学籍番号:
  氏   名: 
 */
/* scanfを用いた例題 */
#include<stdio.h>

int main(){
  int a;
  double x;
  printf("整数を入力してください: ");
  scanf("%d", &a);	  /* 変数aにキーボードから入力した整数値を代入 */

  printf("入力した整数は，%d です\n", a);

  printf("実数を入力してください: ");
  scanf("%lf", &x); /* 変数xにキーボードから入力した実数値を代入 */

  printf("入力した実数は，%lf です\n", x);

  return 0;
}
