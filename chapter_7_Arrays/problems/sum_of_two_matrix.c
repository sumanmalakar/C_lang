#include <stdio.h>

int main()
{
  int a[2][3], b[2][3], i, j;

// for first matrix
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter the value of first matrix\t");
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");

  // for second matrix
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter the value of second matrix\t");
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n");

// for view of matrix one
  printf("The first matrix is \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("The second matrix is \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
printf("\n");
  // the sum of matrix is
  printf("The sum of matrix is \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]+b[i][j]);

    }
    printf("\n");
  }
  

  return 0;
}