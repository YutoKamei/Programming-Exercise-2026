/* アルファベット(大文字・小文字は区別しない)の出現回数を数える(改) */
#include <stdio.h>
#include <ctype.h> /* 文字種類判定のために必要 */

int main (){
  int c; /* 文字はcharだが,getcharを使うのでintで宣言 */
  int i;
  int alpha[26] = {0}; /* 各アルファベットの出現回数(各要素は0で初期化) */

  c = getchar(); /* キーボードから1文字を入力 */
  /* エンターキー(改行)が入力されるまで繰り返す */
  while(c != '\n'){
    if(islower(c)){ /* 小文字かどうかを確認 */
      alpha[c-'a']++;
    }else if(isupper(c)){ /* 大文字かどうかを確認 */
      alpha[c-'A']++;
    }
    c = getchar ();
  }

  for(i = 0; i < 26; i++){
    printf("%c:%d\n", 'a'+i, alpha[i]);
  }

  return 0;
}
