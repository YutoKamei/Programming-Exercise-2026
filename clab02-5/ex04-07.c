/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* ループの制御(break) */
/* キーボードから指定した回数で，繰り返しを中断する */

#include<stdio.h>

int main(){
  int res;
  int i = 1;

  printf("何番目で繰り返しを中断しますか？ (1から30までの範囲): ");
  scanf("%d", &res);

  /* 繰り返しの最大回数30 */
  while(i <= 30){
    printf("%d回目の処理です\n", i);

    /* 繰り返した回数iが，中断回数と同じであればbreak */
    if(i == res){
      break;
    }
    i++;
  }
  printf("%d回目で中断しました。\n", i);
  return 0;
}
