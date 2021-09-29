#include<stdio.h> 
#include<math.h>

int sum(int);
 int main(){

   printf("%d", sum(243));

   return 0;
}

int sum(int n){
  int temp, summ = 0;
  if(n==0){
    return 0;
  }
    return (n%10) + sum(n/10);
}