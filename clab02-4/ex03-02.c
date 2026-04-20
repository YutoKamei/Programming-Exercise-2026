/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* 2次方程式の解を求めるプログラム */

#include<stdio.h>
#include<math.h>	/* コンパイル時 -lm オプションが必要 */

int main(){
  int a, b, c;
  double d;
  double x1, x2;

  /* 値の入力 */
  printf("ax^2+bx+c=0の定数を入力してください。\n");
  printf("ただし，aは0でないとする\n");
  printf("a=");
  scanf("%d", &a);
  printf("b=");
  scanf("%d", &b);
  printf("c=");
  scanf("%d", &c);

  printf("%dx^2+%dx+%d=0の解を求めます。\n", a, b, c);
  d = b*b-4*a*c;				/* 判別式 */
  if(d > 0){					/* 判別式dの値によって場合分け */
	/* 2つの異なる実数解 */
	x1 = (-b + sqrt(d))/(2*a);	/* sqrt: 平方根を求める数学関数 */
	x2 = (-b - sqrt(d))/(2*a);
	printf("x = %lf, %lf\n", x1, x2);
  }else if(d == 0){
	/* 重解 */
	x1 = (-b/(double)(2*a)); /* doubleでキャストすることで小数を表現できるように */
	printf("x = %lf(重解)\n", x1);
  }else{
	/* ここでは解なし(実際は2つの異なる虚数解) */
	printf("解なし\n");
  }
}
