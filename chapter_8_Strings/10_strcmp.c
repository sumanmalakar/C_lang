#include<stdio.h> 
#include<string.h>


 int main(){

char st1[45] = "Hello";
char *str2 = "Harry";
int val = strcmp(st1, str2);
printf("Now the val is %d", val);
  

return 0;
}