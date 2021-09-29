#include<stdio.h> 

int area(int a);
 int main(){
   int a, result;
   printf("Enter the side of squre\n");
   scanf("%d", &a);
   result = area(a);
   printf("The area is = %d\n", result);

   return 0;
}

int area(int a){
  int area = a*a;
  return area;
  // printf("The area is = %d\n", area);
}