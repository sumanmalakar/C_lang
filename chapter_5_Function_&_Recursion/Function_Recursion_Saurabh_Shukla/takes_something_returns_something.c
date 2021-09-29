#include <stdio.h>

// Takes Something Returns Something

int add(int, int);
int main()
{
int a, b;
printf("Enter two number\n");
scanf("%d %d", &a, &b);

printf("The sum is %d ", add(a,b));

  return 0;
}
int add(int x, int y)
{
  return x+y;
}