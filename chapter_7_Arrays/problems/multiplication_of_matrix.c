#include <stdio.h>

int main()
{
  int a[3][3], b[3][2], c[3][2], i, j, sum;

  // for first matrix input
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter the value of first matrix\t");
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");

  // for second matrix input
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Enter the value of second matrix\t");
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n");

  // for view of matrix one
  printf("The first matrix is \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  // for view of second matrix
  printf("The second matrix is \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  // The multiplication of matrix is
  printf("The sum of matrix is \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    { sum = 0;
      for(int k = 0; k<3; k++){
        sum = sum + a[i][k]*b[k][j];
        c[i][j] = sum;
      }
      printf("%d\t", sum);
      
    }
    printf("\n");
  }

  return 0;
}