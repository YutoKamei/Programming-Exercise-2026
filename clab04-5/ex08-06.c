/* 文字列を文字列配列にコピーする関数 */
#include <stdio.h>
#include <string.h>

/* 関数のプロトタイプ宣言 */
int copy(char to[], char from[]);

int main (){
  char s[100] = ""; /* コピー先の配列(要素数は多めに確保) */
  int n; /* コピーした文字数を代入 */

  /* コピー元の文字列は99文字までであれば何でもよい */
  n = copy(s, "Eight apes ate eight apples.");

  printf("コピー結果: %s (%d文字)\n", s, n);
  printf("strlen(s) = %lu\n", strlen(s));

  return 0;
}

/* 文字列をコピーする関数(24から26行目の処理内容についてコメントを記載すること) */
/* 引数:コピー先文字列配列to,コピー元文字列配列from */
int copy(char to[], char from[]){
  int i = 0;

  while(from[i] != '\0'){
    to[i] = from[i];
    i++;
  }
  to[i] = '\0'; /* NULL文字はコピーしないので末尾に格納 */

  return i;
}
