/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 繰り返しの中での条件判定 */
/* 入力した実数値の中から最大値を表示する */

#include<stdio.h>
int main(){
  int i;			/* 制御変数，処理の回数カウント用 */
  int n;			/* 入力するデータの個数 */
  double x;			/* 入力した実数値 */
  double max;			/* 最大値 */

  printf("# of data = ");	/* データ数の入力 (# はnumberの意) */
  scanf("%d", &n);

  /* 最初のデータ処理 */
  /* n=1の場合，最初に入力した実数値が最大値 */
  i = 1;
  printf("data no. %d = ", i);
  scanf("%lf", &max);

  i++;

  /* n-1回繰り返す */
  while(i <= n){		/* while(i < (n-1))でも同義 */
    printf("data no. %d = ", i); /* i番目のデータ処理 */
    scanf("%lf", &x);
    /* i番目に入力した実数値xと(i-1)番目までの最大値maxを比較 */
    if(x > max){
      /* i番目に入力した実数値が(i-1)番目までの最大値よりも大きければ最大値を更新 */
      max = x;
    }
    i++;
  }

  printf("%d個の数の最大値は， %g です。\n", n, max); /* 最大値の出力 */
    
  return 0;
}
