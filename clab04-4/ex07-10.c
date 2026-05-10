/* 値呼び出し */
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int f(int x);

/* 関数fを呼び出してmain関数内の変数xの値が変化するか */
int main (){
  int x = 10;
  int y;

  /* 関数f呼び出し前 */
  printf("main: x = %d\n", x); /* xの値はいくつが出力されるか?(予想しなさい) */
  y = f(x);
  /* 関数f呼び出し後 */
  printf("main: x = %d\n", x); /* xの値はいくつが出力されるか?(予想しなさい) */
  printf("main: y = %d\n", y); /* yの値はいくつが出力されるか?(予想しなさい) */

  return 0;
}

/* 関数f:引数整数型変数x,戻り値整数値 */
int f(int x){
  printf("f: x = %d\n", x); /* xの値はいくつが出力されるか?(予想しなさい) */
  x = 100; /* 変数(仮引数)xに値を代入 */
  printf("f: x = %d\n", x); /* xの値はいくつが出力されるか?(予想しなさい) */
  return x;
}
