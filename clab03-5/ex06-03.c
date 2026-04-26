/* 様々な種類の情報をファイルから読み込む */
#include <stdio.h>

int main (){
  FILE *fp; /* ファイルポインタ */

  /* ファイルから情報を読み込むための変数 */
  int a;
  double b;
  int c; /* 本来はcharだが,fgetcの仕様上intで宣言 */
  char word[100]; /* サイズがわからないので大きめに要素数を確保 */

  fp = fopen("abc.txt", "r");
  if(fp == NULL ){
    printf("ファイルのオープンに失敗しました\n");
    return 1;
  }

  printf("ファイルから内容を読み込みます\n");
  fgets(word, 100, fp); /* abc.txtの1行目の内容を読み込み */
  printf("%s", word );

  c = fgetc(fp); /* abc.txtの2行目の'Z'を読み込み */
  printf("%c", c);
  c = fgetc(fp); /* abc.txtの2行目の改行を読み込み */
  printf("%c", c);

  fscanf(fp, "%s", word ); /* abc.txtの3行目の文字列"ABCDEF"を読み込み */
  printf("%s\n", word );

  /* abc.txtの4行目の内容を指定した書式で読み込み */
  fscanf(fp, "%s %d, %lf", word, &a, &b);
  printf("%s %d, %lf\n", word, a, b);

  return 0;
}
