/*
  プログラミング演習 第2回(4限) 処理の制御(1) 分岐，if，switch (例題)
  学籍番号:
  氏   名: 
 */
/* うるう年の判定 */

#include<stdio.h>

int main(){
  int year;
  printf("西暦の入力: ");
  scanf("%d", &year);

  if((year % 4) == 0){		/* 4の倍数 */
    if((year % 100) == 0){	/* 100の倍数 */
      if((year % 400) == 0){	/* 400の倍数 */
        printf("%d is a leap year.\n", year);
      }else{			/* 400の倍数でない */
        printf("%d is not a leap year.\n", year);
      }
    }else{			/* 100の倍数でない */
      printf("%d is a leap year.\n", year);
    }
  }else{			/* 4の倍数でない */
    printf("%d is not a leap year.\n", year);
  }

  return 0;
}
