#include<stdio.h> 

 int main(){
   // Naive way to create 4 ints
   // int marks1, marks2, marks3, marks4;
   // marks1 = 34;
   // marks2 = 54;
   // marks3 = 45;
   // marks4 = 84;

   int marsk[4];
   marsk[0] = 34;
   marsk[1] = 45;
   marsk[2] = 50;
   marsk[3] = 85;

for(int i = 0; i<4; i++){
   printf("marks %d  is %d \n", i ,marsk[i]);
   };

   return 0;
}