#include <stdio.h>

int main(){
  int score;
  printf("0から1000点の範囲で得点を入力: ");
  scanf("%d",&score);

  if(score >= 900 && score <= 1000){
    printf("Rank S\n");
  }else if(score >= 750 && score < 900){
    printf("Rank A\n");
  }else if(score >= 600 && score < 750){
    printf("Rank B\n");
  }else if(score >= 0 && score < 600){
    printf("Rank C\n");
  }else{
    printf("Error\n");
  }
  return 0;
}
