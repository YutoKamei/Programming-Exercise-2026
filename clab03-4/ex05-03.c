/* 配列の要素にキーボードから値を代入するプログラム */
#include <stdio.h>

int main (){
  double data [15];
  int i;
  printf("15個値を入力します\n");
  for(i = 0; i < 15; i++){
    printf("%d個目: ", i+1);
    scanf("%lf", &data[i]); // 配列dataのi番目の要素に,キーボードから入力した値を格納
  }
  /* 1行で3つの要素を出力して改行 */
  for(i = 0; i < 15; i++){
    printf("data[%d] = %lf\t", i+1, data[i]);
    if((i+1) % 3 == 0){ // 3つの要素を出力したごとに改行する
      printf("\n");
    }
  }
  return 0;
}
