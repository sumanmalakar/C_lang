#include<stdio.h> 

void wrong_swap(int a, int b);
void swap(int *a, int *b);
 int main(){
 int a = 5, b =6;
 printf("The value of x and y before swap %d and %d\n", a,b);
//  wrong_swap(a, b); // will not work due to call by value
 swap(&a, &b); // will work due to call by reference
 printf("The value of x and y after swap %d and %d\n", a, b);

 return 0;
}
void wrong_swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}
void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}