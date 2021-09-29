#include<stdio.h> 
#include<string.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

 int main(){
   struct employee facebook[100];
   facebook[0].code = 100;
   facebook[0].salary = 100.45;
   strcpy(facebook[0].name, "Suman");

   facebook[1].code = 100;
   facebook[1].salary = 100.45;
   strcpy(facebook[1].name, "Rohan Dash");
    printf("Done");
   return 0;
}