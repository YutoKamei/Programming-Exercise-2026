#include <stdio.h>
#include "score.h" /* 自作のscore.hの読み込み */

int main (){
  char name[100];
  int score1, score2;

  printf("学生の氏名を入力: ");
  scanf("%s", name); /* 日本語可 */
  printf("数学の点数を入力: ");
  scanf("%d", &score1);
  printf("英語の点数を入力: ");
  scanf("%d", &score2);

  /* 分割したファイルにある関数を呼び出す */
  print_report(name, score1, score2);

  return 0;
}
