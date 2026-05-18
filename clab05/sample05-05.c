#include <stdio.h>

void memory_dump(void *, unsigned long);

int main(){
  float f = 1.0; /* (1)単精度浮動小数点型変数fを1.0に初期化する宣言 */
  printf("Variable f: address=%p, size=%zu, value=%f\n", &f, sizeof(f), f);
  memory_dump((void *) &f, sizeof(f));

  f = -0.25; /* (2)単精度浮動小数点型変数fに-0.25を代入 */
  printf("\nVariable f: address=%p, size=%zu, value=%f\n", &f, sizeof(f), f);
  memory_dump((void *) &f, sizeof(f));

  f = 1.2; /* (3)単精度浮動小数点型変数fに1.2を代入 */
  printf("\nVariable f: address=%p, size=%zu, value=%f\n", &f, sizeof(f), f);
  memory_dump((void *) &f, sizeof(f));
}

void memory_dump(void *address, unsigned long size){
  unsigned char *uscaddr = address;
  
  printf("\nMemory dump	+0 +1 +2 +3\n");
  printf("%p:", address);
  for(int i = 0; i < size; i++)
    printf(" %02x", *(uscaddr + i));
  printf("\n");
}
