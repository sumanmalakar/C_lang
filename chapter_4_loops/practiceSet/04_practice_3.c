#include<stdio.h> 

 int main(){

int i = 0, n=10, sum=0;
while(i<=n){
  sum += i; // sum = sum +1;
  i++;
}
printf("The sum of 1 to 10 is %d ", sum);

return 0;
}