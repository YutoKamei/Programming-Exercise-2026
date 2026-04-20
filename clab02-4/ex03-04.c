/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 
   複数のif文を組み合わせた条件判定
 */

#include<stdio.h>

int main(){
  int a;

  printf("整数値(0から100)を入力してください: ");
  scanf("%d", &a);

  printf("");
  if(a >= 90 && a <= 100){
	printf("あなたの成績はS");
  }else if(a >= 80 && a < 90){
	printf("あなたの成績はA");
  }else if(a >= 70 && a < 80){
	printf("あなたの成績はB");
  }else if(a >= 60 && a < 70){
	printf("あなたの成績はC");
  }else if(a < 60 && a >= 0){
	printf("不合格");
  }else{
	printf("入力値が不正");
  }
  printf("です。\n");
  return 0;
}
