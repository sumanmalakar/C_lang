#include<stdio.h>

int fab(int);
int main(){
 int x;
 printf("enter a number \n");
 scanf("%d", &x);
 for(int i=1; i<=x; i++){
 printf("%d ", fab(i));
 }

}

int fab(int n){
  if(n==1 || n==2){
    return 1;
  }
  else if(n==0){
    return 0;
  }
  // printf("%d\n", n);
  return fab(n-1) + fab(n-2);
}