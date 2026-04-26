/* 課題(2) */
#include <stdio.h>

#define BLEN 8

int main (){
  int bin[BLEN];
  int i;
  int d = 0;
  int base = 1;

  for(i = 0; i < BLEN; i++){
    scanf("%d", &bin[i]);
  }

  for(i = 0; i < BLEN; i++){
    d += bin[7-i]* base;
    base *= 2;
  }

  printf("%d\n", d);

  return 0;
}
