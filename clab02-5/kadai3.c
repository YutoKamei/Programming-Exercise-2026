#include <stdio.h>

int main(){
  int a,b;
  int p=1;
  double p2=1;
  int i;

  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);

  if(b>=0){
    for(i=0;i<b;i++){
      p=a*p;
    }
    printf("a^b = %d\n",p);
  }else{
    b=-b;
    for(i=0;i<b;i++){
      p2=p2/a;
    }
    printf("a^b = %lf\n",p2);
  }

  return 0;
}
