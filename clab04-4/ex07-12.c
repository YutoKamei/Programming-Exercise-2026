/* 関数を呼び出した回数をカウント(2) */
#include <stdio.h>

void counter(void);

int main(){
  counter(); /* 1回目 */
  counter(); /* 2回目 */
  counter(); /* 3回目 */
  return 0;
}

void counter(){
  static int count; /* 静的変数 */
  count++;
  printf("count: %d\n", count );
}
