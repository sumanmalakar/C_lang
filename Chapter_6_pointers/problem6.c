#include <stdio.h>

// Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by call.

int times(int a);
int main()
{

  int c, x;
  printf("enter a number \n");
  scanf("%d", &x);

  c = times(x);

  printf("%d", c);

  return 0;
}
int times(int a)
{
  return (10 * a);
}