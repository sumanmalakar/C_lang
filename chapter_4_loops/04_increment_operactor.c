#include<stdio.h> 

 int main(){

  int i =5;
  
  printf("The value after i++ is %d \n", ++i);
  i++; //---> Pehle print fir increment
  ++i; //---> Pehle increment fir print
  printf("The value after i is %d \n", i);
  

// printf("The value of i-- is %d \n", i--);
// printf("The value of --i is %d\n", i);

 i+= 10; //--> Increment i by 10
 printf("The value of i is %d \n", i);
 

return 0;
}