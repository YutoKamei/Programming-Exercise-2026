/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* ねずみ算 */
#include<stdio.h>

int main(){
  int mouse = 2;				/* 最初のねずみの数 */
  int month = 1;				/* 1ヶ月目からカウント開始 */

  /* ねずみの数が，2億匹を超えたら繰り返し終了 */
  while(mouse <= 200000000){
    mouse += (mouse/2)*12;			/* 現在のねずみの数を計算 */
    printf("%2dヶ月目: %10d匹\n", month, mouse);
    month++;
  }

  printf("2億匹を越えたのは，%d月でした。\n", month-1);
  return 0;
}
