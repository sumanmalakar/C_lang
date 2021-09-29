#include <stdio.h>

int main()
{
  // program ko jenny's lecture ke jaise dry run kar tabhi condition ka pta chalega

  for (int j = 1; j <= 6; j++)
  {
    for (int i = 1; i <= j; i++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}