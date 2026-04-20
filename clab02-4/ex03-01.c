/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 
   教科書p.51 プログラム5.1 (改)
   入力した数値の平方根を求めるプログラム
   ただし，負値を入力した場合，負数ですと出力する
 */

#include<stdio.h>
#include<math.h>

int main(){
  double x;
  printf("数値を入力してください: ");
  scanf("%lf", &x);

  if(x >= 0.0){
    printf("%lfの平方根は，%lf です。\n", x, sqrt(x));
  }else{
    printf("%lf: 入力した数値は負数です。\n", x);
  }

  return 0;
}
