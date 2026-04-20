/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 条件式の例 ガソリンの料金計算 */

#include<stdio.h>

int main(){
  double fuel;			/* 給油量 */
  double rate;			/* 1リットルあたりのガソリン単価(円) */
  double charge;		/* 料金 */

  rate = 172.1;			/* 大分県の4月15日時点のガソリン価格 */
  printf("給油量の入力> ");
  scanf("%lf", &fuel);		/* 給油量の入力 */

  if(fuel < 20){
    charge = (fuel * rate);
  }else{
    charge = (fuel - 20) * rate * 0.98268;
    charge += (rate * 20.0);
  }

  printf("料金: %.2lf円\n", charge);
  return 0;
}
