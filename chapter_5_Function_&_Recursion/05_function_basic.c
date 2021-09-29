#include<stdio.h> 

void display(); // Function prototype
 int main(){
   int a;
   printf("Initializing display function\n");
   printf("Display function finished its work\n");

   display(); // Function Call
return 0;
}

// Function definition
void display(){
  printf("This is display\n");
}