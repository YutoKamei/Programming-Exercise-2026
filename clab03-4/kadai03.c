/* 課題(3) */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
  char str[100];
  int i;

  fgets(str, 100, stdin );

  for(i = 0; i < (int)strlen(str); i++){
    if(isupper(str[i])){
      putchar(tolower(str[i]));
    }else if(islower(str[i])){
      putchar(toupper(str[i]));
    }else{
      putchar(str[i]);
    }
  }
  return 0;
}
