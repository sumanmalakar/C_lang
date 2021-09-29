#include<stdio.h> 

 int main(){

  int i, n;
  
  for(;;){
    printf("Enter numbers \n");
    scanf("%d", &n);
    if(n<0){
      break;
    }
  }

return 0;
}