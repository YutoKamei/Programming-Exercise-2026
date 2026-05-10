/* C言語で乱数を使う */
#include <stdio.h>
#include <stdlib.h> /* random関数用 */
#include <time.h> /* time関数用 */

#define LEN 10

int main (){
  int a[LEN];
  double x[LEN];
  int i;
  srandom((unsigned)time(NULL)); /* 乱数のシード設定 */

  printf("RAND_MAX = %d\n", RAND_MAX); /* 乱数の最大値 */

  /* 配列の要素に乱数で生成した値を代入 */
  for(i = 0; i < LEN; i++){
    a[i] = random() % 100 + 1; /* 1から100の範囲で整数を生成 */
    x[i] = ((double)random()/ RAND_MAX )*100; /* 0から100.0範囲で実数を生成 */
  }
  /* 配列の要素を出力 */
  for(i = 0; i < LEN; i++){
    printf("a[%d] = %d, x[%d] = %lf\n", i, a[i], i, x[i]);
  }
}
