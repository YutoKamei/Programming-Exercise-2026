/* 2次元配列 */
#include <stdio.h>

int main (){
  int i, j;
  int data [3][5];

  /* 2次元配列の扱い方例 */
  for(i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){
      data[i][j] = (i+1)*(j+1);
    }
  }

  /* 2行目(data[1][0]からdata[1][4])のみを要素ごとに改行して出力 */
  for(j = 0; j < 5; j++){
    printf("data[1][%d] = %d\n", j, data[1][j]); /* 添え字を埋める */
  }

  /* 3列目(data[0][2]からdata[2][2])のみを要素ごとに改行して出力 */
  for(i = 0; i < 3; i++){
    printf("data[%d][2] = %d\n", i, data[i][2]); /* 添え字を埋める */
  }

  /* 全部出力 */
  for(i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){
      /* 行ごとに改行して出力 */
      printf("data[%d][%d] = %d, ", i, j, data[i][j]); /* 添え字を埋める */
    }
    printf("\n");
  }
  return 0;
}
