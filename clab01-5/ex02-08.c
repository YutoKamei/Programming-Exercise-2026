/*
  プログラミング演習 第1回(5限) 変数とデータ型，計算と式と演算子(例題)
  学籍番号:
  氏   名: 
 */
/* 型変換(キャスト) */
#include<stdio.h>

int main(){
  int x, y;

  x = 1;
  y = 2;

  /* 型変換なし(整数同士の割り算) */
  printf("x / y = %d\n", x/y);

  /* 型変換あり(分子を実数に変換して割り算) */
  printf("x / y = %lf\n", (double)x/y);

  return 0;
}
