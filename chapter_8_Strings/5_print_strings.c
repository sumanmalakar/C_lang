#include<stdio.h> 

 int main(){

int i = 0;
  char str[] = "suman";
  char *ptr = str;
  // printf("%s", st);
  while(*ptr!='\0'){
    printf("%c", *ptr);
    *ptr++;
  }

return 0;
} 