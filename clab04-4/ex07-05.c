/* 任意の整数aから任意の整数b(a < b)までの総和を求めるプログラム */

#include <stdio.h>

/* 関数のプロトタイプ宣言 */
int sum(int a, int b);

int main (){
  int x, y;
  printf("Input start value: ");
  scanf("%d", &x);
  printf("Input end value: ");
  scanf("%d", &y);

  if(x >= y){
    printf("yはxよりも大きい値を入力してください: %d, %d", x, y);
    return -1;
  }

  printf("%d+...+%d=%d\n", x, y, sum(x, y));

  return 0;
}

/* sum関数 引数xから引数yまでの総和を求める関数(引数x,yは整数) */
/* 仮引数をa,bからx,yに変更する修正例 */
int sum(int x, int y){
  int i, ret=0;
  if(x <= y){
    for(i = x; i <=y; i++){
      ret += i;
    }
  }
  return ret;
}

/* sum関数 引数aから引数bまでの総和を求める関数(引数a,bは整数) */
/* 仮引数a,bのままにして,関数定義の中の変数をx,yからa,bに修正 */
/*
int sum(int a, int b){
  int i, ret;
  if(a < b){
    for(i = a; i <= b; i++){
      ret += i;
    }
  }
  return ret;
}
*/
