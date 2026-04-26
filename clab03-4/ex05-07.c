/* C言語における文字の扱い方 */
#include <stdio.h>

int main (){
  char a1 = 'A';
  char a2 = 65;

  char alpha [26] = {0};
  int i;

  printf("moji: %c %c\n", a1 , a2);
  printf("code: %d %d\n", a1 , a2);

  /* 'A'(65)に0から25を足した値を配列alphaに代入 */
  for(i = 0; i < 26; i++){
    alpha[i] = 'A'+i; /* 'A'(65)にiの値を足す */
  }

  /* 大文字と小文字を出力 */
  /* ASCIIコードで大文字('A')と小文字('a')の差は32 */
  for(i = 0; i < 26; i++){
    printf("%c%c", alpha[i], alpha[i]+32);
  }
  printf("\n");

  return 0;
}
