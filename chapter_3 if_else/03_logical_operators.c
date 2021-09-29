#include<stdio.h> 

 int main(){

   int age;
   int vipPass = 0;
   vipPass = 1;

   printf("Enter your age\n");
   scanf("%d", &age);

   if ((age <= 70 && age >=18) || !(vipPass ==1) )
   {
     if(age == 18){
       printf("Your are at 18 you can drive");
     } else
     {
       /* code */
     printf("you are above 18 and below 70, you cannot drive\n");
     }
     
   }
   else
   {
     printf("You can not dirve\n");
   }

return 0;
}