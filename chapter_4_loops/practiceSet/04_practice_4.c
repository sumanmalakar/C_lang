#include <stdio.h>

int main()
{

  // int i, n = 10, sum = 0;
  // for (i = 0; i <= n; i++)
  // {
  //   sum += i;
  // }

  // printf("The sum of 1 to 10 is %d ", sum);

  int i, n = 8, sum = 0;
  for (i = 0; i <= 10; i++)
  {
    sum = sum + n*i;
  }

  printf("The sum of 1 to 10 is %d ", sum);

  return 0;
}