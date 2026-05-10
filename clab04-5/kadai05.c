/* 課題7-(5) */
#include <stdio.h>
#include "kadai7-5.h"

int main (){
  unsigned int c;
  int n, m;

  printf("自然数n,mを入力してください: ");
  scanf("%d %d", &n, &m);
  if(n == 0 || m == 0){
    printf("illegal number.\n");
    return -1;
  }
  c = combination(n, m);
  printf("%d C %d = %u\n", n, m, c);

  return 0;
}
