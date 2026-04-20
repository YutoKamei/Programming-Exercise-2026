/*
  プログラミング演習 第1回(5限) 変数とデータ型，計算と式と演算子(例題)
  学籍番号:
  氏   名: 
 */
/* 10進数12，8進数012，16進数0x12をそれぞれ10進数，8進数，16進数で出力 */
#include<stdio.h>

int main(){
  printf("value = %d, %d, %d\n", 12, 012, 0x12);
  printf("value = %o, %o, %o\n", 12, 012, 0x12);
  printf("value = %x, %x, %x\n", 12, 012, 0x12);
  printf("value = %X, %X, %X\n", 12, 012, 0x12);
  return 0;
}

