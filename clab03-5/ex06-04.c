/* ファイルの終端(EOF)まで読み込むプログラム */
#include <stdio.h>

int main (){
  FILE *fp;
  int c;

  fp = fopen("strings.txt", "r");
  if(fp == NULL){
    printf("ファイルのオープンに失敗しました\n");
    return 1;
  }

  printf("ファイルから内容を1文字ずつ読み込みます\n");

  /* ファイルを最後まで読み込むと,EOF(-1)が返ってくる */
  while((c = fgetc(fp)) != EOF ){
    fputc(c, stdout );
  }
  printf("c = %d\n", c);
  if(feof(fp)){
    printf("ファイルの終端(EOF)に到達しました\n");
  }

  fclose(fp);

  return 0;
}
