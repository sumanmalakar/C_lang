#include <stdio.h>

int main()
{
  int a, b;

  // printf("the value of a is %d and the value of b is %d ", a, b);

  printf("Enter the value of a and b \n");
  scanf("%d %d", &a, &b);
  printf("The sum of a %d and b %d is %d ", a, b, a + b);

  return 0;
}