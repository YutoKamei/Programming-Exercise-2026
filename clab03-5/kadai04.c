/* 課題(5) */
#include <stdio.h>

int main (){
  int d;
  int i;

  FILE *fp;

  fp = fopen("data.txt", "r");
  if(fp == NULL ){
    printf("Error\n");
    return 1;
  }

  for(i = 0; i < 10; i++){
    fscanf(fp , "%d", &d);
    printf("%d\n", 2*d);
  }
  return 0;
}
