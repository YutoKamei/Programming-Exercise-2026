/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 九九の表を出力(二重ループ) */
#include<stdio.h>

int main(){
  int i, j;
  for(i = 1; i < 10; i++){
    for(j = 1; j < 10; j++){
      printf("%2d ", i*j);
    }
    printf("\n");
  }

  return 0;
}
