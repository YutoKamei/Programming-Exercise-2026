/* 階乗を求めるプログラム(関数を使用する場合) */
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int factorial(int n);

int main(){
  int fact, n;

  /* データ個数の入力 */
  printf("input number = ");
  scanf("%d", &n);

  fact = factorial (n);

  printf("%d! = %d\n", n, fact ); /* 結果の出力 */

  return 0;
}

/* factorial関数:引数に指定した整数nの階乗を求め戻り値とする */
int factorial(int n){
  int f, i;

  /* 階乗計算 */
  f = 1;
  for(i = 1; i <= n; i++){
    f = f * i;
  }

  return f;
}
