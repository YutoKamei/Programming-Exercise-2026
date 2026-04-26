/* 配列要素の値の平均値と増減率を求めるプログラム */
#include <stdio.h>

int main (){
  int i, n;
  double data [100];
  double total , average = 0.0;

  printf("データの入力個数(1-100): ");
  scanf("%d", &n);

  for(i = 0, total = 0.0; i < n; i++){
    printf("data [%d] = ", i+1);
    scanf("%lf", &data[i]);

    total += data[i];
  }
  average = total / n;
  printf("total = %g\n", total );
  printf("average = %g\n", average );

  /* 各要素の平均値に対する増減率 */
  for(i = 0; i < n; i++){
    printf("data [%d]: %+6.1f %%\n", i+1, (data[i]-average )/ average *100.0);
  }
  return 0;
}
