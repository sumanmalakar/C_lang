#include<stdio.h> 

 int main(){

  int choise, a,b, sum, sub, mul, div;
  printf("Enter your choise \n 1. for add \n 2. for subtraction\n 3. for multiplication\n 4.for divistion\n ");
  scanf("%d", &choise);   

   


   switch(choise){
     case 1:
     {
     printf("Enter two number \n");
     scanf("%d %d", &a, &b);
     printf("sum of %d and %d is %d ",a, b, a+b);
     }
     break;
     case 2:
     {
       printf("Enter two number \n");
       scanf("%d %d", &a, &b);
       printf("subtraction of %d and %d is %d ", a, b, a - b);
     }
     break;
     case 3:
     {
       printf("Enter two number \n");
       scanf("%d %d", &a, &b);
       printf("multiplication of %d and %d is %d ", a, b, a * b);
     }
     break;
     case 4:
     {
       printf("Enter two number \n");
       scanf("%d %d", &a, &b);
       printf("division of %d and %d is %d ", a, b, a / b);
     }
     break;
     default :
     printf("Invalid Entry!");
   }
  

 

     

  return 0;
}