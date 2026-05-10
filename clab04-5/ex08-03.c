/* 参照呼び出し(配列を引数にした場合の関数呼び出し) */
#include <stdio.h>

/* 関数のプロトタイプ宣言 */
void multiple(int a[], int n, int b);
void print_intarray (int a[], int n);

#define LEN 5

int main (){
  int a[LEN] = {10, 20, 30, 40, 50};

  print_intarray (a, LEN ); /* multiple呼び出し前の配列aを出力 */
  multiple(a, LEN, 2); /* 配列aの要素を2倍 */
  print_intarray (a, LEN ); /* multiple呼び出し後の配列aを出力 */
  multiple(a, LEN, 3); /* 配列aの要素を3倍 */
  print_intarray (a, LEN); /* multiple呼び出し後の配列aを出力 */

  return 0;
}

/* 配列aの要素をb倍するmultiple関数 */
/* 引数:int型配列a,配列の要素数n,b倍する数,戻り値:なし */
void multiple(int a[], int n, int b){
  int i;
  for(i = 0; i < n; i++){
    a[i] = a[i] * b; /* 各要素をb倍 */
  }
}

/* 配列aの要素を出力するprint_intarray関数 */
/* 引数:int型配列a,配列の要素数n,戻り値:なし */
void print_intarray(int a[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("a[%d] = %d, ", i, a[i]);
  }
  printf("\n");
}
