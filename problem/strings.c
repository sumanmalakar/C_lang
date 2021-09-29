#include<stdio.h> 

 int main(){
   int a [] = {1, 2, 0, 3, 2, 4, 5};
    // int max;
int max = a[0];
   for(int i=0; i<7; i++){
     
     if( a[i] > max ){
       max = a[i];
       printf("%d\n", max);
     }

   }
   printf("\n");
   printf("\n");
   printf("\n");


   printf("%d ", max);

  

return 0;
}