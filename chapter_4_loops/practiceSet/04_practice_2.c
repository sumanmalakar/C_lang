#include<stdio.h> 

 int main(){

int i,n;
printf("***Multiplication table of N number!***\n");
printf("Enter a number \n");
scanf("%d", &n);

for(i=1; i<=10; i++){
  printf("%d  X  %d = %d \n", n,i,n*i);
}
  

return 0;
}