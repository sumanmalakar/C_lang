#include<stdio.h> 

 int main(){

  int i = 34;
  int *j = &i; // j will now store the address of i

  printf("The value of i is %d\n", i);
  printf("The value of i is %d\n", *j);
  printf("The address of i is %u\n", &i);
  printf("The address of i is %d\n", j);
  printf("The address of j is %u\n", &j);
  printf("The value of j is %u\n", *(&j));
  // printf("the i is %u", &i);
  
  // int x = 5;
  // printf("%d\n",x);
  // printf("%d\n", &x);
  // printf("%d", *&x);


  // int x = 5, *j;
  // j = &x;
  // printf("%d %u\n",x, j);
  // printf("%d %u\n",*j, &x);
  // printf("%u",*&j);

  return 0;
}