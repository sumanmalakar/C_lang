#include<stdio.h> 

 int main(){
   int a[2][3], i,j, sum=0;

   for(i=0; i<2; i++){
     for(j=0; j<3; j++){
       printf("Enter the value of %d ", a[i][j]);
       scanf("%d", &a[i][j]);
     }
   }
   for (i = 0; i < 2; i++)
   {
     for (j = 0; j < 3; j++)
     {
     printf("%d\t",a[i][j]);
     sum = sum+a[i][j];
     }
     printf("The sum is %d", sum);
     printf("\n");
   }
   printf("\n");
   printf("The sum is %d", sum);

return 0;
}