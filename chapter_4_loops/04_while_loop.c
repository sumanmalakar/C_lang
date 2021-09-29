#include<stdio.h> 

 int main(){

int a ;
printf("Enter value of a\n");
scanf("%d", &a);

// while(a<10){
// while (a > 10) infinite loop occures
{
  printf("%d\n", a);
  a++;
}

return 0;
}