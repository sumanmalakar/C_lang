#include<stdio.h> 
#include<string.h>

struct emp{
  int code;
  float salary;
  char name[30];
};

 int main(){

   struct emp e1, e2, e3;
   printf("Enter the code of employee e1 \n");
   scanf("%d", &e1.code);
   printf("Enter the salary of employee e1 \n");
   scanf("%f", &e1.salary);
   printf("Enter the name of employee e1 \n");
   scanf("%s", e1.name);

   printf("Enter the code of employee e2 \n");
   scanf("%d", &e2.code);
   printf("Enter the salary of employee e2 \n");
   scanf("%f", &e2.salary);
   printf("Enter the name of employee e2 \n");
   scanf("%s", e2.name);
   
   printf("Enter the code of employee e3 \n");
   scanf("%d", &e3.code);
   printf("Enter the salary of employee e3 \n");
   scanf("%f", &e3.salary);
   printf("Enter the name of employee e3 \n");
   scanf("%s", e3.name);
  
  

return 0;
}