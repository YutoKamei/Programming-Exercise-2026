#include <stdio.h>

int main(){
  long double ld; /* 長倍精度浮動小数点数型 */
  double d; /* 倍精度浮動小数点数型 */
  float f; /* 単精度浮動小数点数型 */
  long int l; /* 長整数型。longでも可。 */
  int i; /* 整数型 */
  short int s; /* 短整数型。shortでも可。*/
  char c; /* 文字型 */

  printf("Variable c: address=%p, size=%zu\n", &c, sizeof(c));
  printf("Variable s: address=%p, size=%zu\n", &s, sizeof(s));
  printf("Variable i: address=%p, size=%zu\n", &i, sizeof(i));
  printf("Variable l: address=%p, size=%zu\n", &l, sizeof(l));
  printf("Variable f: address=%p, size=%zu\n", &f, sizeof(f));
  printf("Variable d: address=%p, size=%zu\n", &d, sizeof(d));
  printf("Variable ld: address=%p, size=%zu\n", &ld, sizeof(ld));

  return 0;
}
