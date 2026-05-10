/* シーザー暗号に関するプログラム */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 関数のプロトタイプ宣言 */
char encrypt(char p, int key);
char decrypt(char e, int key);

int main(){
  int i;
  int key = 0;
  char plaintext[] = "AbC*dEfGH0"; /* 平文の文字列 */
  int n = strlen(plaintext);
  char ciphertext[n+1];

  printf("シフトする数を整数値(1-25)で入力: ");
  scanf("%d", &key);

  printf("平文:\t %s\n", plaintext);
  /* 暗号化処理 */
  for(i = 0; i < n; i++){
    ciphertext [i] = encrypt(plaintext[i], key);
  }
  ciphertext[n] = '\0';
  printf("暗号文:\t %s\n", ciphertext);

  /* 復号処理 */
  printf("復号結果:");
  for(i = 0; i < n; i++){
    putchar(decrypt( ciphertext[i], key ));
  }
  putchar('\n');

  return 0;
}

/* encrypt関数 */
/* 引数で与えた文字をkey分シフトした文字を返す */
char encrypt(char p, int key){
  char e;
  if(isupper(p)){
    e = (p - 'A' + key) % 26 + 'A';
  }else if(islower(p)){
    e = (p - 'a' + key) % 26 + 'a';
  }else{
    e = p;
  }
  return e;
}

/* decrypt関数 */
/* 引数で与えた文字を-key分シフトした文字を返す */
char decrypt(char e, int key){
  char p;
  if(isupper(e)){
    /* 負数の剰余は負数になるので,+26して強制的に正の値に補正 */
    p = (e - 'A' - key + 26) % 26 + 'A';
  }else if(islower(e)){
    /* 負数の剰余は負数になるので,+26して強制的に正の値に補正 */
    p = (e - 'a' - key + 26) % 26 + 'a';
  }else{
    p = e;
  }
  return p;
}
