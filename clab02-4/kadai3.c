#include <stdio.h>

int main(){
  int year;

  printf("西暦をyyyyの形式で入力(1868-2026): ");
  scanf("%d",&year);

  if(year >= 1868 && year <= 2026){
    if(year >= 2019){
      printf("R%02d\n",(year-2019)+1);
    }else if(year >= 1989){
      printf("H%02d\n",(year-1989)+1);
    }else if(year >= 1926){
      printf("S%02d\n",(year-1926)+1);
    }else if(year >= 1912){
      printf("T%02d\n",(year-1912)+1);
    }else{
      printf("M%02d\n",(year-1868)+1);
    }
  }else{
    printf("Error:範囲外です。\n");
  }

  return 0;
}
