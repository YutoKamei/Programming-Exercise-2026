/*
  プログラミング演習 第1回(5限) 変数とデータ型，計算と式と演算子(例題)
  学籍番号:
  氏   名: 
 */
/* 数学関数を用いたプログラムの例 */
/* コンパイル時には必ず，オプションとして-lmを忘れないこと */
#include<stdio.h>
#include<math.h>						/* 数学関数のヘッダを記入 */

int main(){
   double x, rad, s, p;				/* 変数のデータ型を記入 */

  x = 10.0;
  /* 自然対数log(10) */
  printf("log(%lf) = %lf\n", x, log(x));
  /* 三角関数 (引数の単位はラジアン) */
  rad = (60 * 3.14)/180;		/* 60度をラジアンに変換 */
  printf("sin(60) = %lf\n", sin(rad));
  printf("cos(60) = %lf\n", cos(rad));

  /* 平方根 */
  s = sqrt(3);
  printf("sqrt(3) = %lf\n", s);

  /* n乗の計算 */
  p = pow(2, x);				/* 2の10乗 */
  printf("2^10 = %lf\n", p);
  
  return 0;
}
