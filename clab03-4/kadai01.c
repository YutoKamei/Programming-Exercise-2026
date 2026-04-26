/* 課題(1) */
#include <stdio.h>

int main (){
  double a[100];
  int i;

  for(i = 0; i < 100; i++){
    a[i] = 1./(i+1);
  }

  for(i = 0; i < 100; i++){
    printf("a[%d] = %lf ", i, a[i]);
    if((i +1)%5==0){
      printf("\n");
    }
  }
  return 0;
}
