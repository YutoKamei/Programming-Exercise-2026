/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 
   キーボードから入力した時刻(整数)が，
   開店している時間かどうかを判定するプログラム。
 */

#include<stdio.h>

int main(){
  int hour;

  printf("時刻を入力してください(0-24): ");
  scanf("%d", &hour);

  /* (1) AND演算による比較演算の組み合わせ */
  if(hour >= 8 && hour <= 22){
	printf("open: %d\n", (hour >= 8 && hour <= 22));
  }else{
	printf("closed: %d\n", (hour < 8 || hour > 22));
  }

  /* (2) (1)の条件式をド・モルガンの法則によって書き換え */
  if(!(hour < 8 || hour > 22)){
	printf("open: %d\n", !(hour < 8 || hour > 22));
  }else{
	printf("closed: %d\n", !(hour >= 8 && hour <= 22));
  }
  
  return 0;
}
