#include<stdio.h> 
#include<math.h>

int poww(int, int);
 int main(){

 int a,b;
 printf("enter a \n");
 scanf("%d", &a);
 printf("enter b \n");
 scanf("%d", &b);

 printf("%d\n", poww(a,b));
  

return 0;
}

int poww(int a, int b){
  if(b==0){
    return 1;
  }

  return a*poww(a, b-1);

}