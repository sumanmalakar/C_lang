#include <stdio.h>
int main()
{

  int i, n, rem, temp, sum = 0;

  printf("Enter the five digit of N: \n");
  scanf("%d", &n);
while(n!=0){

// rem = n%10;
// printf("reminder is = %d ", rem);
// printf("\n");

// n = n/10;
// printf("n is = %d  ", n);
// printf("\n");

// sum = sum + rem;
// printf("sum at this time = %d", sum);
// printf("\n");

rem = n % 10;
n = n / 10;
sum = sum + rem;
}

printf("The grand sum is = %d", sum);

  return 0;
}