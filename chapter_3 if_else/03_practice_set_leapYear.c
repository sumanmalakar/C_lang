#include<stdio.h> 

 int main(){

  int year;
  printf("Enter the year \n");
  scanf("%d", &year);

  if(year % 4 == 0){
    
    printf("The year %d is leap year ", year);
      
  }
  else{
    printf("This is not a leap year!");
  }



return 0;
}