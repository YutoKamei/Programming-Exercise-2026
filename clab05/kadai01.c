#include <stdio.h>

int main(){
  int i, j, k;

  /* 変数iのアドレスとサイズ */
  printf("address of i is %p\n", &i);
  printf("size of i is %lu\n", sizeof(i));
  printf("size of &i is %lu\n", sizeof(&i));

  /* 変数jのアドレスとサイズ */
  printf("address of j is %p\n", &j);
  printf("size of j is %lu\n", sizeof(j));
  printf("size of &j is %lu\n", sizeof(&j));

  /* 変数kのアドレスとサイズ */
  printf("address of k is %p\n", &k);
  printf("size of k is %lu\n", sizeof(k));
  printf("size of &k is %lu\n", sizeof(&k));

  return 0;
}
