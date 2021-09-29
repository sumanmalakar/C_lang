#include <math.h>
#include <stdio.h>

int squreSum(int);
int main()
{

  int n;
  printf("Enter a number\n");
  scanf("%d", &n);

  printf("The sum of square is %d ", squreSum(n));

  return 0;
}

int squreSum(int n)
{
  int c, d;
  if (n == 0)
  {
    return 0;
  }
  // c = squreSum(n - 1);
  // d = pow(c,2);
  // return (n * n + d);
  c = n * n + pow(squreSum(n - 1),2);
  return c;
}

// int main()
// {
//   int x, c;
//   scanf("%d", &x);
//   c = pow(x,2);
//   printf("%d\n", c);
//   return 0;
// }