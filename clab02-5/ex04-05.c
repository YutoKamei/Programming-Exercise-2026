/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 繰り返しによる処理結果の累積 */
/* 自然数nを入力し，nの階乗(n!)を求める */
/* nの階乗(n!)は，1からnまでの自然数の積 */
/* この例題プログラムには誤りが1つ含まれている */

#include<stdio.h>

int main(){
  int i, n;
  int fact = 1;			/* nの階乗の値 */

  printf("自然数n = ");
  scanf("%d", &n);
  i = 1;
  while(i <= n){
    fact = fact * i;		/* fact *= i;でも可 */
    i++;
  }
  printf("%d! = %d\n", n, fact);

  return 0;  
}
