/* 関数の引数に文字列を渡す */
/* 文字列の長さを調べる関数(strlenと同じ機能を実装) */

#include <stdio.h>
#include <string.h>

/* 関数のプロトタイプ宣言 */
int length(char str[]);

int main (){
  char str1[] = "Hello";
  char str2[] = "Computer Science";
  char str3[] = "Programming";
  char str4[] = "0123456789";
  char str5[] = "Eight apes ate eight apples.";

  printf("%sは,文字数%d個です\n", str1, length(str1));
  printf("%sは,文字数%d個です\n", str2, length(str2));
  printf("%sは,文字数%d個です\n", str3, length(str3));
  printf("%sは,文字数%d個です\n", str4, length(str4));
  printf("%sは,文字数%d個です\n", str5, length(str5));

  /* strlen関数の戻り値のデータ型は,size_t(実体はlong unsigned int) */
  /* %ldは,longの値を出力するための書式指定子 */
  printf("%sは,文字数%ld個です\n", str1, strlen(str1));
  printf("%sは,文字数%ld個です\n", str2, strlen(str2));
  printf("%sは,文字数%ld個です\n", str3, strlen(str3));
  printf("%sは,文字数%ld個です\n", str4, strlen(str4));
  printf("%sは,文字数%ld個です\n", str5, strlen(str5));

  return 0;
}

/* 文字列の長さを調べるlength関数(NULL文字は除く)(37~38行目,40行目の処理内容についてコメントを記載すること) */
/* 引数:文字列配列s,戻り値:文字の長さ */
int length(char s[]){
  int len = 0;
  while(s[len] != '\0'){
    len ++;
  }
  return len;
}
