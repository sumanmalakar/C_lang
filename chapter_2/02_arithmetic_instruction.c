#include<stdio.h> 
#include<math.h>

 int main(){

  int a = 4;
  int b = 8;
  int z;
  z = b * a;// legal
  // b* a = z; // Illegal

  printf("The value of z is: %d\n", z);
  printf("The value of a+b is: %d\n", a+b);
  printf("The value of a+b is: %d\n", a - b);
  printf("The value of a+b is: %d\n", a * b);
  printf("The value of a+b is: %d\n", a / b);

 printf("5 when divided by 2 leaves a remainder of %d\n ", 5%2);
 printf("-5 when divided by 2 leaves a remainder of %d\n ", -5 % 2);
 printf("5 when divided by -2 leaves a remainder of %d\n ", 5 % -2);

// No operator is assumed to be present
//  printf("The value of 4*5 is %d\n", (4)(5)); // wrong will not return 20
 printf("The value of 4*5 is %d\n", (4) * (5));

 // There is no operator to perform exponetiation in c
 printf("The value of 4 ^ 5 is %d\n", 4^5); // will not produce 4 to the power 5

 printf("The value of 4 to the power is %f\n", pow(2, 2));

 printf("The value of 6 + 5.6 is %d\n", 6 + 5);
 printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
 printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
 printf("The value of 5/2 is %d\n", 5/2);

 printf("k is 3.0/9 %f", 3.0 / 9);
 return 0;
}