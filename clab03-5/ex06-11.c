/* 10進数(正の整数)から2進数に変換するプログラムをマクロを用いて書き換えた */
#include <stdio.h>

#define BLEN 16 /* 2進数のビット長(bit length) */
#define MAXINT 65535

int main (){
  int i = 0;
  int d; /* 10進数整数 */
  int bin[BLEN] = {0}; /* 2進数格納用 */

  printf("0から%dまでの範囲で10進数整数値を入力してください: ", MAXINT );
  scanf("%d", &d);

  /* dの範囲チェック。負数,MAXINT以上であればプログラムを終了 */
  if(d < 0 || d > MAXINT){
    printf("入力した値が範囲外です。プログラムを終了します。\n");
    return -1; /* returnでプログラム終了 */
  }

  /* 10進数から2進数への変換 */
  while(d != 0){
    bin[i] = d % 2;  /* dを2で割った余り */
    d = d / 2;       /* dを2で割った商 */
    i++;
  }

  /* bin[i]を逆順に出力 */
  for(i = 0; i < BLEN; i++){
    printf("%d", bin[BLEN-i-1]);
  }
  printf("\n");

  return 0;
}
