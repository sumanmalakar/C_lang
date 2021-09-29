#include<stdio.h> 
// sum is a function which takes a and b as input and returns an iteger as an output

int sum(int a, int b); // function protoype declaration

 int main(){
   int c;

  c = sum(40,5); //the values 40 and 5 are arguments
  printf("The sum  is %d",c);

return 0;
}
int sum(int a, int b){
  int sum;
  sum = a+b;
  return sum;
  // printf("The sum %d and %d is %d \n",a,b, sum);
}