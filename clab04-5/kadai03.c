/* 課題7-(3) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANUM 10

void array_add (int a[], int b[], int c[], int n);
void array_print (int x[], int n);

int main (){
  int i;
  int a[ANUM], b[ANUM], c[ANUM];
  srandom ((unsigned)time(NULL));

  for(i = 0; i < ANUM; i++){
    a[i] = random() % 100 + 1;
    b[i] = random() % 100 + 1;
  }

  array_add (a, b, c, ANUM);
  printf("a = ");
  array_print (a, ANUM);
  printf("b = ");
  array_print (b, ANUM);
  printf("c = ");
  array_print (c, ANUM);

  return 0;
}

void array_add (int a[], int b[], int c[], int n){
  int i;
  for(i = 0; i < n; i++){
    c[i] = a[i] + b[i];
  }
}

void array_print (int x[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
}
