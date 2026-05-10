/* 階乗を求めるプログラム(関数を使用する場合) */
#include<stdio.h>

/* 関数のプロトタイプ宣言 */
void factorial();

/* グローバル変数宣言 */
int fact = 1; /* 関数をまたいで使用可能 */
int n; /* 関数をまたいで使用可能 */

int main (){
  /* データ個数の入力 */
  printf("input number = ");
  scanf("%d", &n);

  factorial();

  printf("%d! = %d\n", n, fact ); /* 結果の出力 */

  return 0;
}

/* factorial関数:グローバル変数を用いて整数nの階乗を求める */
void factorial(){
  int i;
  /* 階乗計算 */
  for(i = 1; i <= n; i++){
    fact *= i;
  }
  /* voidのため戻り値なし */
}
