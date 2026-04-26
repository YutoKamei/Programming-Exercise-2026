/* 文字列の扱い方 */
#include <stdio.h>
#include <string.h>

int main (){
  int i;
  char str1[6] = "Hello";
  char str2[] = "World";
  char str3[10];

  /* 文字列の出力 */
  printf("%s, %s\n", str1 , str2 );

  /* 文字列配列の要素を1つずつ出力 */
  for(i = 0; i < (int)strlen(str1 ); i++){
    printf("%c", str1[i]);
  }
  printf("\n");

  /* 文字列配列の要素を1つずつ出力 */
  for(i = 0; i < (int)strlen(str2 ); i++){
    printf("%c", str2[i]);
  }
  printf("\n");

  printf("9文字までの英単語を入力: ");
  scanf("%s", str3 );

  printf("%s\n", str3 );

  return 0;
}
