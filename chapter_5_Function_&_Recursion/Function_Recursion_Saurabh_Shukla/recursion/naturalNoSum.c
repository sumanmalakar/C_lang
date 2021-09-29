#include<stdio.h> 

int natural(int);
 int main(){
   int x;
   printf("Enter a number\n");
   scanf("%d", &x);

for(int i=1; i<=x; i++){
   printf("%d ", natural(i));
}

return 0;
}

int natural(int n){
  if(n==0){
    return 0;
  }
  return n+ natural(n-1);
}