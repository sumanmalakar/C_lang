#include<stdio.h> 
#include<string.h>  

 int main(){
   int flag = 0;
   char s1 [] = "Hello";
   char s2 [] = "Hello";

  //  int value;
  //  value = strcmp(s1, s2);
  //  if(value == 0){
    //  printf("both strings are same");
  //  }
  //  else {
    //  printf("the strings are not same ");
  //  }
  //  printf("%d", value);
// 
  // strcmp
  // strncmp
  for(int i = 0; s1[i]!='\0' || s2[i]!='\0'; i++ ){
    if(s1[i] != s2[i]){
      flag = 1;
      break;
    }
  }
  if(flag == 1){
    printf("Strings are not same!");
  }
  else
  {
    printf("Strings are same!");
  }


return 0;
}