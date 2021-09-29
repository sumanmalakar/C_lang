#include<stdio.h> 
// write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these address Same? Why?

void fun(int);
 int main(){

int i = 4 , *j,c;
j = &i;

printf("the address of i is %d\n", i);

 fun(i);
 printf("the address of i is %u\n", &i);

 return 0;
}
void fun(int x){
 printf("The address of variable x is %u \n", &x);
}