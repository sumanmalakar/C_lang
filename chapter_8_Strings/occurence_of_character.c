#include<stdio.h> 

int occurence(char st[], char a){
  char *ptr = st;
  int count = 0;
  while(*ptr!='\0'){
    if(*ptr==a){
      count++; 
    }
      ptr++;
  }
  return count;
}

 int main(){
char st[] = "011233455567";
int c = occurence(st, '1');
  printf("The occurence of characater is = %d ", c);

return 0;
}