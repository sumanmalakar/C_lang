#include<stdio.h> 

// Takes Nothing Returns Something

int add();
 int main(){

int sum;

sum = add();

printf("sum is %d " , sum);
  

return 0;
}
int add(){
  int a, b;
  printf("Enter two numbers\n");
  scanf("%d %d", &a, &b);
  return a+b;
}