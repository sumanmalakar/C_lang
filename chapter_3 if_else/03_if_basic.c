#include<stdio.h> 

// C program to check weather a number is odd or even

 int main(){

  int a, b;
  printf("Enter a number\n");
  scanf("%d", &a);

  if(a %2==0){
    printf("%d is even\n", a);
  }
  else
  {
    printf("%d is odd\n", a);
    }
  

return 0;
}