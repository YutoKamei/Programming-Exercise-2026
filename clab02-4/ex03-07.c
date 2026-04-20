/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* うるう年の判定(条件式の組み合わせ) */
#include<stdio.h>

int main(){
  int year;
  printf("西暦の入力: ");
  scanf("%d", &year);

  /* 条件式を組み合わせてif文による条件判定式は1つのみ */
  if(((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0)){
    printf("%d is a leap year.\n", year); /* うるう年 */
  }else{
    printf("%d is not a leap year.\n", year); /* うるう年ではない */
  }
  
  return 0;
}
