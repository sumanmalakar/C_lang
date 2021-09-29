#include<stdio.h> 
// write a program to print the address of a variable. Use this address to get the value of this variable

 int main(){

  int n =5, *y;
  y = &n;
  printf("the address is %u\n", y);
  printf("the address is %d \n", *y);

  return 0;
}