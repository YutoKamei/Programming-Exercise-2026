/* 実数を用いた関数の例 */
/* sin(x)/cos(x)をテイラー展開して近似値を求める */
#include <stdio.h>
#include <math.h> /* 数学関数のsin関数,cos関数との値の比較 */

#define N 7 /* 繰り返し回数 */
#define PI3 3.14 /* 円周率 */

double sinx(double x);
double cosx(double x);
long long factorial (int k);

int main (){
  printf("自作関数: sin(0) = %lf, sin(0.1) = %lf, sin(3.14) = %lf\n", sinx(0), sinx(0.1), sinx(PI3));
  printf("数学関数: sin(0) = %lf, sin(0.1) = %lf, sin(3.14) = %lf\n", sin(0), sin(0.1), sin(PI3));
  printf("自作関数: cos(0) = %lf, cos(0.1) = %lf, cos(3.14) = %lf\n", cosx(0), cosx(0.1), cosx(PI3));
  printf("数学関数: cos(0) = %lf, cos(0.1) = %lf, cos(3.14) = %lf\n", cos(0), cos(0.1), cos(PI3));

  return 0;
}

/* 自作のsin関数:引数:実数,戻り値:実数 */
double sinx(double x){
  int i;
  double s = 0.0;
  /* マクローリン展開によりsin(x)の値を求める */
  for(i = 0; i < N; i++){
    s += pow(-1, i)*( pow(x, 2*i+1)/ factorial(2*i+1));
  }
  return s;
}

/* 自作のcos関数:引数:実数,戻り値:実数 */
double cosx(double x){
  int i;
  double c = 0.0;
  /* マクローリン展開によりcos(x)の値を求める */
  for(i = 0; i < N; i++){
    c += pow(-1, i)*( pow(x, 2*i)/ factorial(2*i));
  }
  return c;
}

/* kの階乗を求める関数:引数整数,戻り値long longの整数 */
long long factorial(int k){
  int i;
  long long f = 1;
  for(i = 1; i < k + 1; i++){
    f *= i;
  }
  return f;
}
