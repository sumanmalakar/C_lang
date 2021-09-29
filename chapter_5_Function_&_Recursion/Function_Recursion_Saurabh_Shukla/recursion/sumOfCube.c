#include<stdio.h> 

int cube(int);
 int main(){
   int x;
   printf("Enter a number\n");
   scanf("%d", &x);

 printf("%d", cube(x));
  

return 0;
}
int cube(int n){
  if(n==0){
    return 0;
  }
  else{
    return n*n*n + cube(n-1);
  }
}