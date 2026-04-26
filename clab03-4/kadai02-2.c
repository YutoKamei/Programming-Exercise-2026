/* 課題(2) 修正版 */
#include <stdio.h>

#define BLEN 8

int main (){
  char bin[BLEN + 1];  // 文字列なので +1（終端 '\0'）
  int i;
  int d = 0;
  int base = 1;

  // 文字列として入力（例: 10101010）
  scanf("%s", bin);

  for(i = 0; i < BLEN; i++){
    int bit = bin[BLEN - 1 - i] - '0';  // '0'→0, '1'→1 に変換
    d += bit * base;
    base *= 2;
  }

  printf("%d\n", d);

  return 0;
}
