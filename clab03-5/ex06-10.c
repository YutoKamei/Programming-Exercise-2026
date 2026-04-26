/* マクロを用いたプログラム例 */
/* 消費税計算 */

#include <stdio.h>

#define TAXRATE 1.1 /* 2019年10月以降10%なのでこの数値を変更すること */

int main (){
  int price1 = 100;
  int price2 = 1980;

  printf("%d円の商品は,税込み価格%.0f円です\n", price1, price1 * TAXRATE );
  printf("%d円の商品は,税込み価格%.0f円です\n", price2, price2 * TAXRATE );

  return 0;
}
