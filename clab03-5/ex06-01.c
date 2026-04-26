/* ファイルの作成 */
#include <stdio.h>

int main (){
  FILE *fp; /* ファイルポインタの宣言 */

  /* カレントディレクトリに,abc.txtファイルを作成 */
  fp = fopen("abc.txt", "w");

  /* fopenのオープンに成功したか・失敗したのか確認 */
  if(fp == NULL ){
    printf("ファイルのオープン(作成)に失敗しました\n");
    return 1;
  }

  /* ここではなにも書き込みはしない */

  fclose(fp); /* ファイルを閉じる */

  return 0;
}
