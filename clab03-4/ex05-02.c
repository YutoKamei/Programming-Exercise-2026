/* 配列の初期化(宣言時) */
#include <stdio.h>

int main (){
  int a[5] = {2, 3, 5, 7, 11};
  int i = 0;

  while(i < 5){
    printf("a[%d] = %d\n", i, a[i]);
    i++;
  }
  return 0;
}
