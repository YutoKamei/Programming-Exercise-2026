/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 繰り返しによる処理結果の累積 */
/* 5個の実数値を入力し，その合計値を求める */

#include<stdio.h>

int main(){
  double sum,x;
  int i;

  sum = 0.0;
  i = 0;

  while(i < 5){
    printf("data = ");
    scanf("%lf", &x);
    sum = sum + x;		/* sum += x;とも記述可 */
    i++;		/* i = i + 1;と同義，ここは++i;でも可 */
  }

  printf("sum = %g\n", sum);	/* gは値の大きさによって自動的に出力形式を変更 */

  return 0;
}
