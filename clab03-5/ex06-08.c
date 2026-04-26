/* コマンドライン引数を用いたプログラムの例 */
/* ファイル名の指定,標準入力からのデータ読み込みに対応したプログラム */
#include <stdio.h>

int main(int argc , char *argv []){
  FILE *fp;
  char buf[100];

  if(argc > 1){
    /* コマンドラインの引数にファイル名を指定 */
    fprintf(stdout, "%sをオープンします\n", argv [1]);
    fp = fopen(argv[1], "r");
    if(fp == NULL){
      fprintf(stderr, "%sをオープンできませんでした\n", argv [1]);
      return 1;
    }

    while(!feof(fp)){
      fgets(buf, 100, fp);
      fprintf(stdout, "%s", buf );
    }

    fclose(fp);
  }else if(argc == 1){
    /* 標準入力から読み込む */
    fprintf(stdout, "STDINからファイルを読み込みます\n");
    while(!feof(stdin)){
      fgets(buf, 100, stdin );
      fprintf(stdout, "%s", buf );
    }
  }

  return 0;
}
