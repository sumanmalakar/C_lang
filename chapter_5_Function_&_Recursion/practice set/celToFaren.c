#include<stdio.h> 

float temp(int x);
 int main(){

int x;
printf("Enter the tempature\n");
scanf("%d", &x);

printf("The Fareh = %f", temp(x));
  
return 0;
}
float temp(int x){
  return (x*9.5) + 32;
}