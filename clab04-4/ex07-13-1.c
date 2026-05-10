/* 階乗計算(再帰版) */
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int factorial(int n);

int main (){
  int fact, x;
  printf("nの階乗を計算します: "); /* n!のnを入力 */
  scanf("%d", &x);

  fact = factorial(x);
  printf("%d! = %d\n", x, fact );

  return 0;
}

/* 関数factorial:引数整数型変数x,戻り値整数値 */
int factorial(int n){
  if(n > 0){
    return n*factorial(n-1);
  }else{
    return 1;
  }
}
