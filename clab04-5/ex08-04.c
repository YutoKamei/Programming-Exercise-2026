/* 配列の要素の平均値を求める関数 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 100

/* 関数のプロトタイプ宣言 */
/* double型配列の要素の値の平均値を求める関数(戻り値:平均値) */
double average(double x[], int n);
/* double型配列の各要素に乱数で発生させた値を代入 */
void initialize(double x[], int n);

int main (){
  double x[LEN];
  double ave = 0.0;
  srandom ((unsigned)time(NULL)); /* 乱数のシード設定 */

  initialize (x, LEN);
  ave = average(x, LEN);
  printf("average = %lf\n", ave);

  return 0;
}

double average(double x[], int n){
  int i;
  double total = 0.0;
  for(i = 0; i < n; i++){
    total += x[i];
  }
  return total / n;
}

void initialize(double x[], int n){
  int i;

  /* 配列の要素に乱数で生成した値を代入 */
  for(i = 0; i < n; i++){
    x[i] = ((double)random()/ RAND_MAX )*100; /* 0から100.0範囲で実数を生成 */
  }
}
