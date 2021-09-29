#include <stdio.h>

int main()
{
  // program ko jenny's lecture ke jaise dry run kar tabhi condition ka pta chalega

  for (int j = 6; j; j--)
  {
    for (int i = 1; i <= j; i++)
    {
      // printf(" ");
      printf("*");
    }
    printf("\n");
    // for(int k=1; k<=j;k++)
    // printf(" ");
  }

  return 0;
}