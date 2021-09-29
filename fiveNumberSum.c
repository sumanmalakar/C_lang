#include <stdio.h>
int main()
{

  int i, n, rem,
      sum = 0;

  printf("Enter the five digit of N: \n");
  scanf("%d", &n);

  for (i = 1; i<=5; i++)
  {
  //   temp = n%10;

    
  //   printf("The value of temp = %d \n", temp);
  //   sum = sum +temp;
  //   printf("the sum is %d \n", sum);
  
  rem = n % 10;
  printf("reminder is = %d ", rem);
  printf("\n");

  n = n / 10;
  printf("n is = %d  ", n);
  printf("\n");

  sum = sum + rem;
  printf("sum at this time = %d", sum);
  printf("\n");
  }

  printf("The total sum is %d ", sum);

  return 0;
}