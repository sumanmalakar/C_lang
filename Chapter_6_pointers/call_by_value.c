#include<stdio.h> 

int sum(int a, int b);
 int main(){

int x= 40, y = 7, c;
c = sum(x,y); // call by value;

printf("The value fo 4+7 is %d\n", c);
  

return 0;
}
int sum(int a, int b){
 int c;
 c = a+b;
  a = 120;
  b = 140; 
 return c;
}