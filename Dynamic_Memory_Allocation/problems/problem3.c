#include<stdio.h> 
#include<stdlib.h>

// create an array of multiplication table of 7 upto 10(7*10 = 70). Use realloc to make it store 15 numbers (form 7*1 to 7*15)

 int main(){
   int *ptr;
   ptr = (int *)malloc(10* sizeof(int));
   for(int i = 0; i<10; i++){
     ptr[i] = 7*(i+1);
     printf("The value of 7 X %d =  %d \n", i+1,ptr[i]);
   }
    
   ptr = realloc(ptr, 15*sizeof(int));
   printf("\n After reallocation ....\n\n");
   for (int i = 0; i < 15; i++)
   {
     ptr[i] = 7 * (i + 1);
     printf("The value of 7 X %d =  %d \n", i + 1, ptr[i]);
   }

return 0;
}