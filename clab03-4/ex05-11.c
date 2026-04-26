/* 文字列操作関数を用いた例題 */
/*
  最初の3文字が"END"となる文字列を読み込むまで,
  文字列データを1行ずつ読み込み,その中で最も長い行の文字列を出力
*/

#include <stdio.h>
#include <string.h> /* 文字列操作に必要 */

int main (){
  char str[256]; /* 入力用文字列配列 */
  char max[256]; /* 最長文字列 */

  fgets(str, 256, stdin ); /* キーボードから文字列入力 */
  strncpy(max, str, 256); /* 最初に入力した文字列を最長文字列として扱う */

  /* ENDで始まる文字列が入力されたら終了 */
  while(strncmp(str, "END", 3) != 0){
    fgets(str, 256, stdin );
    if(strlen(str) > strlen(max )){
      strncpy(max, str, 256);
    }
  }

  printf("最長文字列: %s\n", max );
  return 0;
}
