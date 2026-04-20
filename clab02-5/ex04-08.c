/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 入力した金額を加算していくプログラム
   負数の金額が入力された場合は加算せずに次へ進む。
   0を入力したら，入力した金額の総計を出力して終了
*/

#include<stdio.h>

int main(){
  int total = 0;
  int price;

  for(;;){
	printf("金額を入力> ");
	scanf("%d", &price);
	/* 0ならばループを抜ける(break) */
	if(price == 0){
          break;
	}

	/* 負数であれば，ループの最初に戻り入力を続ける */
	if(price < 0){
	  continue;
	}
	/* 合計金額に加算 */
	total += price;
  }
  /* 合計金額の出力 */
  printf("合計金額: %d\n", total);
  return 0;
}
