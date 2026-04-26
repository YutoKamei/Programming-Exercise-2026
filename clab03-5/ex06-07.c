/* 標準入力の代わりにファイルから入力する */
#include <stdio.h>

int main (){
  int a[30] = {0};
  int n;
  int i;

  printf("# of data = ");
  scanf("%d", &n);

  /* nの値の範囲チェック */
  if(n < 0){
    n = 1;
  }else if(n > 30){
    n = 30;
  }

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  /* 入力したデータをそのまま出力する */
  printf("\nOUTPUT: \n");
  for(i = 0; i < n; i++){
    printf("%d\n", a[i]);
  }
  return 0;
}
