#include<stdio.h> 

// Write a program to print the value of a variable i by using "pointer to pointer" type of variable

 int main(){

  int i =5, *p, **q;
  p = &i;
  q = &p;
  printf("the value i is %d", **q);

return 0;
}