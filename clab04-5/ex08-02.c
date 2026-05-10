/* 関数の引数で,配列の受け渡し */
/* 配列の中身を関数側で出力 */
#include <stdio.h>
#include <stdlib.h> /* random関数で必要 */
#include <time.h> /* time関数で必要 */

#define LEN 10

/* 関数のプロトタイプ宣言 */
void print_intarray(int a[]);
void print_doublearray(double x[]);

int main (){
  int a[LEN];
  double x[LEN];

  int i;
  srandom ((unsigned)time(NULL)); /* 乱数のシード設定 */

  /* 配列の要素に乱数で生成した値を代入 */
  for(i = 0; i < LEN; i++){
    a[i] = random() % 100 + 1; /* 1から100の範囲で整数を生成 */
    x[i] = ((double)random()/ RAND_MAX )*100; /* 0から100.0範囲で実数を生成 */
  }

  print_intarray(a); /* int型配列aの内容を出力 */
  print_doublearray(x); /* double型配列xの内容を出力 */

  return 0;
}

/* print_intarray関数:引数:int型配列,戻り値:なし */
void print_intarray(int a[]){
  int i;
  for(i = 0; i < LEN; i++){
    printf("a[%d] = %d, ", i, a[i]);
  }
  printf("\n");
}

/* print_doublearray関数:引数:double型配列,戻り値:なし */
void print_doublearray(double x[]){
  int i;
  for(i = 0; i < LEN; i++){
    printf("x[%d] = %lf, ", i, x[i]);
  }
  printf("\n");
}
