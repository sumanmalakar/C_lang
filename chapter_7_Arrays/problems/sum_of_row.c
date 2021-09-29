#include <stdio.h>

int main()
{
  int a[3][3], i, j, sumRow, sumColum;

// for input
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter the value of %d ", a[i][j]);
      scanf("%d", &a[i][j]);
    }
  }
  
  // This is for output
  for (i = 0; i < 3; i++)
  {
    sumRow =0, sumColum =0;

        for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
       
       sumRow = sumRow + a[i][j];
       sumColum = sumColum+a[j][i];
    }
       
    printf("sum row is  %d, sum column is %d", sumRow, sumColum);

    printf("\n");
  }
    // printf("sum column is  %d", sumColum);
  printf("\n");

  return 0;
}