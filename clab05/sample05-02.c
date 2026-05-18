#include <stdio.h>

int main(){
  int i;
  printf("address of i is %p\n", &i);
  printf("size of i is %zu\n", sizeof(i));
  printf("size of &i is %zu\n", sizeof(&i));
  return 0;
}
