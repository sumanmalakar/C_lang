#include<stdio.h> 
// Write a function slice() to slice a string. It should change the original string such that it is now the sliced sting. Take m and n as the start and ending position for slice.

void slice(char *st, int m, int n){
  int i = 0;
  while((m+i)<n){
    st[i] = st[i+m];
    i++;
  }
  st[i] = '\0';
}

 int main(){
char st[] = "Suman_Malakr";
slice(st, 1,10);
printf("%s", st);
   

return 0;
}