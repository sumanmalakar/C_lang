#include<stdio.h> 

void present(char st[], char a){
  char *ptr = st;
  int count = 0;
  while(*ptr!='\0'){
    if(*ptr==a){
      count++;
    }
      ptr++; 
    
  }
  if(count>=1){
    printf("The string %c is present ", a);
  }
  else{
    printf("The string %c is not present ", a);
  }
 
}

 int main(){
// char st[] = {'3','3','a','v'};
char st[] = "Ram Mohan ray";

present(st, 'y');
// char c = present(st, '1');
//   printf("The occurence of characater is = %d ", c);

return 0;
}