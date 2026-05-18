#include <stdio.h>

void memory_dump(void *address, unsigned long size);

int main(){
  /* 文字型変数の宣言と初期化 */
  char c = -2;
  unsigned char uc = -2;
  /* 整数型変数の宣言と初期化 */
  int i = -2;
  unsigned int ui = -2;

  /* 各変数の値とアドレス、メモリ上のバイト数 */
  printf("Variable c: address=%p, size=%zu, value=%d\n", &c, sizeof(c), c);
  printf("\tc+1 = %d\n", c+1);
  printf("Variable uc: address=%p, size=%zu, value=%u\n", &uc, sizeof(uc), uc);
  printf("\tuc+1 = %u\n", uc+1);
  printf("Variable i: address=%p, size=%zu, value=%d\n", &i, sizeof(i), i);
  printf("\ti+1 = %d\n", i+1);
  printf("Variable ui: address=%p, size=%zu, value=%u\n", &ui, sizeof(ui), ui);
  printf("\tui+1 = %u\n", ui+1);

  /* 各変数に割り当てられたメモリの内容表示 */
  printf("\n== Memory dunmp of char c ==\n");
  memory_dump(&c, sizeof(c));
  printf("\n== Memory dunmp of unsigned char uc ==\n");
  memory_dump(&uc, sizeof(uc));
  printf("\n== Memory dunmp of int i ==\n");
  memory_dump(&i, sizeof(i));
  printf("\n== Memory dunmp of unsigned int ui ==\n");
  memory_dump(&ui, sizeof(ui));

  return(0);
}

void memory_dump(void *address, unsigned long size){
  unsigned char *uscaddr = address;
  printf("Memory dump +0 +1 +2 +3\n");
  printf("%p:", address);
  for(int i = 0; i < size; i++)
    printf(" %02x", *(uscaddr + i));
  printf("\n");
}
