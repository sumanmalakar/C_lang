#include<stdio.h> 

int avg(float a, float b);

 int main(){
avg(10,5);

return 0;
}

int avg(float a, float b){
  float avg;
  avg = (a+b)/2;
  printf("The avg of %f and %f is %f\n ", a,b,avg);
}