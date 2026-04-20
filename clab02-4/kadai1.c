/*2次方程式の解を求めるプログラム*/

#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c;
  double d;
  double x1,x2;

  printf("ax^2+bx+c=0の定数を入力してください。\n");
  printf("ただし,aは0でないとする\n");
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("c=");
  scanf("%d",&c);

  printf("%dx^2+%dx+%d=0の解を求めます。\n",a,b,c);
  d=b*b-4*a*c;

  if(d>0){
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x=%lf,%lf\n",x1,x2);
  }else if(d==0){
    x1=((double)-b/(2*a));
    printf("x=%lf(重解)\n",x1);
  }else{
    x1=((double)-b/(2*a));
    x2=(sqrt(-d))/(2*a);
    printf("虚数解: x1=%lf+%lfi, x2=%lf-%lfi\n",x1,x2,x1,x2);
  }
}
