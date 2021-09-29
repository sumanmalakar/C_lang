#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int f(int n) {
  //Write your code here.
  f(3) = 3; f(2) = 2; f(1) = 1;
  if(n==0){
      return 0;
  }
  else {
  return f(n-1) +f(n-2)+ f(n-3) ;
  }
  
}

int main() {
    int n ;
  
    scanf("%d", &n);
    int ans = f(n);
 
    printf("%d", ans); 
    return 0;
}