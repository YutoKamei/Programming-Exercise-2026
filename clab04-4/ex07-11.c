/* 関数を呼び出した回数をカウント(1) */
#include <stdio.h>

void counter(void);

int main(){
  counter(); /* 1回目 */
  counter(); /* 2回目 */
  counter(); /* 3回目 */
  return 0;
}

void counter(){
  int count = 0;
  count++;
  printf("count: %d\n", count );
}
