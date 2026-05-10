/* 階乗計算(再帰版) */
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int factorial (int n);

int main (){
  int fact, x;
  printf("nの階乗を計算します: "); /* n!のnを入力 */
  scanf("%d", &x);

  fact = factorial (x);
  printf("%d! = %d\n", x, fact );

  return 0;
}

/* 関数factorial:引数整数型変数x,戻り値整数値 */
int factorial(int n){
  if(n > 0){
    printf("factrial(%d)を呼び出します。\n", n);
    int f = n*factorial(n-1);
    printf("factorial(%d) = %d\n", n, f);
    return f;
  }else{
    printf("factorial(0) = 1\n");
    return 1;
  }
}
