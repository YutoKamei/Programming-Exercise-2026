#include <stdio.h>

void memory_dump(void *address, unsigned long size);

int main(){
  int i = 1; /* (1)整数型変数iを1に初期化して宣言 */
  printf("Variable i: address=%p, size=%zu, value=%d\n", &i, sizeof(i), i);
  memory_dump((void *) &i, sizeof(i));

  i = -2; /* (2)整数型変数iに-2を代入 */
  printf("\nVariable i: address=%p, size=%zu, value=%d\n", &i, sizeof(i), i);
  memory_dump((void *) &i, sizeof(i));

  return 0;
}

void memory_dump(void *address, unsigned long size){
  unsigned char *uscaddr = address;
  
  printf("\nMemory dump	+0 +1 +2 +3\n");
  printf("%p:", address);
  for(int i = 0; i < size; i++)
    printf(" %02x", *(uscaddr + i));
  printf("\n");
}
