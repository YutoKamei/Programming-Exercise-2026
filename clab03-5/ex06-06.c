/* 標準出力と標準エラー出力 */
#include <stdio.h>

int main (){
  int i;

  /* いずれも,"1234567890"が画面上に出力 */
  fprintf(stdout, "1234567890\n");
  fprintf(stderr, "1234567890\n");

  for(i = 0; i < 10; i++){
    if((i+1) % 2 == 0){
      /* 偶数回目であれば,標準出力 */
      fprintf(stdout, "%d\n", i+1);
    }else{
      /* 奇数回目であれば,標準エラー出力 */
      fprintf(stderr, "%d\n", i+1);
    }
  }
  return 0;
}
