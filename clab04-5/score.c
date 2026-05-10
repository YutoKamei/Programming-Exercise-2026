#include <stdio.h>
#include "score.h" /* 自作のscore.hの読み込み */

/* 平均点の計算 */
double calc_average(int s1, int s2){
  return (s1+s2)/2;
}

/* 合格・不合格の判定:合格:1,不合格:0 */
int judge_pass(double ave){
  if(ave >= 60.0){
    return 1;
  }
  return 0;
}

/* 評点の計算 */
char get_grade(double ave){
  if(ave >= 80.0){
    return 'A';
  }else if(ave >= 70.0){
    return 'B';
  }else if(ave >= 60.0){
    return 'C';
  }
  return 'F';
}

/* 成績を出力 */
/* const char name[]で,関数内で配列nameの内容を書き換えできないようにする */
void print_report (const char name [], int s1, int s2){
  /* 2科目の点数の平均点を計算 */
  double ave = calc_average(s1, s2);
  int result;

  printf("--- %sさんの成績 ---\n", name);
  printf("数学: %3d点\n", s1);
  printf("英語: %3d点\n", s2);
  printf("平均点: %.2f\n", ave);
  printf("評点: %c\n", get_grade (ave));
  result = judge_pass(ave);
  printf("結果: ");
  if(result == 1){
    printf("合格\n");
  }else{
    printf("不合格\n");
  }
}
