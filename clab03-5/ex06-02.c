/* 様々な種類の情報をファイルに書き込む */
#include <stdio.h>

int main (){
  FILE *fp; /* ファイルポインタ */

  int a = 10; /* 整数値 */
  double b = 20.2394; /* 実数値 */
  char c = 'Z'; /* 文字 */
  char word[] = "ABCDEF"; /* 文字列配列 */

  /* abc.txtファイルをオープン */
  fp = fopen("abc.txt", "w");
  if(fp == NULL ){
    printf("ファイルのオープンに失敗しました\n");
    return 1;
  }

  printf("ファイルに書き込みします。\n"); /* 画面上へ出力 */
  fprintf(fp, "ファイルに書き込みします。\n"); /* abc.txtへ書き込み */

  /* 文字(1文字分)の書き込み */
  fputc(c, fp); /* 1文字('Z')をabc.txtに書き込み */
  fputc('\n', fp); /* 改行をabc.txtに書き込み */

  /* 1行分の書き込み */
  fputs(word , fp); /* 文字列配列wordの内容をabc.txtに書き込み */
  fputc('\n', fp); /* 改行をabc.txtに書き込み */

  /* 指定した書式に従い各変数の値をabc.txtに書き込み */
  fprintf(fp , "%s, %d, %lf\n", word, a, b);

  /* ファイルのクローズ */
  fclose(fp);

  return 0;
}
