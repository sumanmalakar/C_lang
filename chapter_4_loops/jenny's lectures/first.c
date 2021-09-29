#include <stdio.h>

int main()
{

  for (int j = 1; j <= 11; j++)
  {
    for (int i = 1; i <= 20; i++)
    {
      printf("%d ", i*j);
    }
    printf("\n");
  }
  return 0;
}