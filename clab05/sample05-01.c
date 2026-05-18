#include <stdio.h>

int main(){
  unsigned char kanji[] = "亜";
  /* 漢字コードで指定した漢字を表示する */
  printf("%c%c%c\n", 0xe4, 0xba, 0x9c);
  /* 「亜」の漢字コードを表示する */
  printf("%x%x%x\n", kanji[0], kanji[1], kanji[2]);
}
