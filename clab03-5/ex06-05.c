/* fprintfを用いてファイルへの書き込み */
#include <stdio.h>

int main (){
  FILE *fpr, *fpo;
  int i;

  char s[100]; /* 読み込む文字列の長さは99文字までとする */

  char infile[] = "strings.txt";
  char outfile[] = "output.txt";

  fpr = fopen(infile, "r");
  if(fpr == NULL){
    printf("ファイル%sのオープンに失敗しました\n", infile );
    return -1;
  }

  fpo = fopen(outfile, "w");
  if(fpo == NULL){
    printf("ファイル%sのオープンに失敗しました\n", outfile );
    return -1;
  }

  printf("ファイル%sから内容を1行ずつ読み込み, 行番号を付けてファイル%sに書き込み\n\n", infile , outfile );

  i = 1;
  while(fgets(s, sizeof(s), fpr )){
    fprintf(fpo, "%2d| %s", i++, s);
  }

  fclose(fpr);
  fclose(fpo);

  return 0;
}
