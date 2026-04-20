#include <stdio.h>

int main(){
  int depth;
  int i,j;
  printf("段数を指定してください: ");
  scanf("%d",&depth);

  for(i=0;i<depth;i++){
    for(j=0;j<i+1;j++){
      printf("*");
    }
    printf("\n");
  }
}
