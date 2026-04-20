/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 条件分岐(switch-case文) */
/* 10進数1桁の数値を7進数に変換 */
/* この例題プログラムには正常に動作しない誤りが含まれていますので
   正しく動作するプログラムに修正して，レポートにプログラムとその実行結果を貼る
 */

#include<stdio.h>

int main(){
  int decimal;
  printf("1桁の10進数整数を入力: ");
  scanf("%d", &decimal);

  printf("10進数%dは，7進数では ", decimal);

  switch(decimal){		/* 条件式 */
  case 7:
    printf("10");
    break;
  case 8:
    printf("11");
    break;
  case 9:
    printf("12");
    break;
  default:			/* 0から6までの場合 */
    printf("%2d", decimal);
    break;
  }

  printf(" です\n");
  return 0;
}
