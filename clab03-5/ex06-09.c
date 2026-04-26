/* マクロを使わないプログラム例 */
/* 消費税計算 */

#include <stdio.h>

int main (){
  int price1 = 100;
  int price2 = 1980;

  printf("%d円の商品は,税込み価格%.0f円です\n", price1, price1 * 1.1);
  printf("%d円の商品は,税込み価格%.0f円です\n", price2, price2 * 1.1);

  return 0;
}
