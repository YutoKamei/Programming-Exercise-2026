/* 入力された整数に対応する英単語を出力(文字列の配列) */
#include <stdio.h>

int main (){
  /* 配列の要素番号に対応する数字の単語を格納 */
  char number[][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; /* 0から9までを表す英単語 */
  int n;

  do{
    printf("0-9の数字を入力: ");
    scanf("%d", &n);
    /* -1を入力したらdo-while繰り返しを抜ける */
    if(n == -1){
      break;
    }

    printf("%d は, %s です。\n", n, number[n]);
  }while(1);

  return 0;
}
