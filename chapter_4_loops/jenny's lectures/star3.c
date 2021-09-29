#include <stdio.h>

int main()
{
  // program ko jenny's lecture ke jaise dry run kar tabhi condition ka pta chalega

int n=6;

  for (int j =1; j<=n; j++)
  {
    for (int i = 1; i <= j-1; i++)
    {
      printf(" ");
    }
    for(int k=1; k<= n-j+1; k++)
    {
      printf("*");
    }
    printf("\n");
    
  }

  return 0;
}