/* 階乗を求めるプログラム(関数を使用しない場合) */
/* n=17 のときは int で扱える範囲の整数値を超えてしまうオーバーフローが発生する。*/
#include <stdio.h>

int main (){
  int fact, n, i;

  /* データ個数の入力 */
  printf("input number = ");
  scanf("%d", &n);

  /* 階乗計算 */
  fact = 1;
  for(i = 1; i <= n; i++){
    fact = fact * i;
  }

  printf("%d! = %d\n", n, fact ); /* 結果の出力 */

  return 0;
}
