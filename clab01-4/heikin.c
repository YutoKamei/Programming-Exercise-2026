#include<stdio.h>
int main(){
   int i, n;
   float s;
   printf("データをひとつずつ入力して下さい。\n");
   printf("0を入力すると, データの入力を終わります。\n");

   i = 1;
   n = 0;
   s = 0.0;
   while(i != 0){
      printf("%2d> ", n + 1);
      scanf("%d", &i);
      s = s + i;
      n++;
   }
   printf("%3d個, 入力されました。\n", n - 1);
   printf("平均値は %f です。\n", s / (n - 1));
   return 0;
}
