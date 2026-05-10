/* ハノイの塔(再帰呼び出し) */
#include <stdio.h>

void hanoi(char src, char dst, char tmp, int n);

int main(){
  int n;
  printf("Input number of discs: ");
  scanf("%d", &n);
  hanoi('A', 'B', 'C', n);
  return 0;
}

void hanoi(char src, char dst, char tmp, int n){
  if(n > 1){
    hanoi(src, tmp, dst, n -1);
    hanoi(src, dst, tmp, 1);
    hanoi(tmp, dst, src, n -1);
  }else{
    printf("move from %c to %c\n", src, dst );
  }
}
