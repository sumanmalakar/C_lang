#include <stdio.h>

int main()
{

  int i = 0, n = 10, sum = 0;

  do
  {
    sum += i; // sum = sum +i;
    i++;
  } while (i <= n);

  printf("The sum of 1 to 10 is %d ", sum);

  return 0;
}