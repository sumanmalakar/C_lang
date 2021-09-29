#include<stdio.h> 

 int main(){

  // int n;
  
  // for(;;){
  //   printf("Enter a number \n");
  //   scanf("%d", &n);
  //   if(n%1==0 && n%2 ==0){
  //   printf("The Number %d is prime \n", n);
  //   } else
  //   {
  //     printf("The Number %d is not a prime \n", n);
  //   }
  
  // }


int n = 5, prime= 1;
for(int i=2; i<n; i++){
  if(n%i == 0){
    prime = 0;
    break;
  }
}
if(prime ==0 && n!=2){
  printf("This is not a prime number");
}
else{
  printf("This is a prime number");
}
  return 0;
}