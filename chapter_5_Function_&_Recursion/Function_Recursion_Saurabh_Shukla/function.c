#include<stdio.h> 

void add();
void hello();
 int main()
{

  printf("Hello World!");
  add();
  hello();

  return 0;
}

void hello(){
  printf("This is Suman Malakar!");
}


void add(){
  int a,b,c;
  printf("Enter the two number\n");
  scanf("%d %d", &a,&b);
  printf("sum is %d", c= a+b);
}