/*
  プログラミング演習 第2回(5限) 処理の制御(2) 反復，while，for (例題)
  学籍番号:
  氏   名: 
 */
/* 無限ループ */
/* このプログラムを実行した際には落ちついて，
   Ctrl-c (ctrlキーを押しながら，cを押してください */
#include<stdio.h>

int main(){
  /* forの場合 */
  for(;;){
	printf("無限ループ");
  }

  /* whileの場合 */
  /* whileの場合を試す場合には，13行目から15行目までをコメントアウトして，
	 20行目と24行目のコメント記号を削除する。*/
  /*
  while(1){
	printf("無限ループ");
  }
  */
  return 0;	  /* do not reach this statement*/
}
