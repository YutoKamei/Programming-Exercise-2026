/* 
   教科書 p.57 2つめのプログラム
   紛らわしいif文の書き方(解釈2)
   xに-1.0，5.0, 10.1をキーボードから入力したときに
   どういう出力になるか考えよう。
 */

#include<stdio.h>

int main(){
  double x;
  
  scanf("%lf", &x);

  if(x > 0.0){
	if(x > 10.0){
	  printf("Condition A.\n");
	}
  }else{
	  printf("Condition B.\n");
  }
  return 0;
}
