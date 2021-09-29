#include<stdio.h> 
// Takes Something Returns Nothing

int add(int, int);
 int main(){

int a,b,c;
printf("Enter two numbers\n");
scanf("%d %d", &a, &b);

add(a, b); //Actual Arguments ! Call by value

c = add(a,b); 
  // printf("%d",c);

return 0;
}
int add(int x, int y){ // Formal Arguments
  
  return x+y;
}