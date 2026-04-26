/* 列挙定数の例 */
/* 誕生日の曜日を求める(ツェラーの公式) */

#include <stdio.h>

int main (){
  enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat }; /* Sun=0,...,Sat=6 */

  int year, month, day;
  int q2, q3, r1, r2, r3;
  int fm[12] = {2,5,0,3,5,1,4,6,2,4,0,3};
  int w;

  printf("あなたの誕生日を入力してください\n");
  printf("年(yyyy): ");
  scanf("%d", &year );
  printf("月(mm): ");
  scanf("%d", &month );
  printf("日(dd): ");
  scanf("%d", &day );

  /* 誕生月が1月か2月の場合 */
  if(month == 1 || month == 2){
    year = year - 1;
    month = month + 12;
  }

  r1 = year % 400;

  q2 = r1 / 100;
  r2 = r1 % 100;

  q3 = r2 / 4;
  r3 = r2 % 4;

  w = (5*(q2+q3)+r3+fm[month-3]+day)%7;

  switch(w){
    case Sun:
      printf("日曜日です\n");
      break;
    case Mon:
      printf("月曜日です\n");
      break;
    case Tue:
      printf("火曜日です\n");
      break;
    case Wed:
      printf("水曜日です\n");
      break;
    case Thu:
      printf("木曜日です\n");
      break;
    case Fri:
      printf("金曜日です\n");
      break;
    case Sat:
      printf("土曜日です\n");
      break;
    default:
      printf("判定不能");
      break;
  }

  return 0;
}
