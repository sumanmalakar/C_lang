#include<stdio.h> 

int fun(int );
 int main(){
   int k;
   k = fun(5);
   printf("%d", k);

return 0;
}

int fun(int a){
  int s;
  if(a == 1){
    return a;

  }
  s = a + fun(a-1);
  return s;
}