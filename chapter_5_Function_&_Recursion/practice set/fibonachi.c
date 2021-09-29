#include <stdio.h>

int fab(int x);
int main()
{
  int a = 5;
  printf("The value of fab %d is %d", a, fab(a));

  return 0;
}

int fab(int x)
{
  printf("calling factoril %d \n", x);
  if (x == 1 || x == 02)
  {
    return 1;
  }
  else
  {
    return x + fab(x - 1) + fab(x-2);
  }
}