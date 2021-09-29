#include<stdio.h> 

 int main(){

// int temp, sum=0;
  
  // for(int n=0; n<=50; n++){
  //   printf("Suman Malakar %d\n", n);
  //   // temp = n;
  //   sum = sum + n;
  // }
  // printf("The total sum is %d", sum);

  // for(int i=10; i>0; --i){
  //   printf("%d \n", i);
  // }
  // int n =8;

  // for(int i=1; i<=10; i++){

  //     printf("8 X %d = %d\n", i , n*i);
  // }

  // for(;;){
  //   printf("Hello world!");
  // }
 
 // factorial
  // int temp = 1,n =10;
  // for(int i = n; i!=0; i--){
  //   if(n==0){
  //     return 1;
  //   } else{
  //   temp = temp*i;
  //   }
  // } 
  // printf("%d", temp);

int n, a = 0, b =1;
printf("Enter a number \n");
scanf("%d",&n);

printf("%d ",a);
printf("%d ",b);


for(int i=0; i<n-2; i++){
  int c = a+b;
  printf("%d ", c);
  a=b;
  b=c;
}


return 0;
}