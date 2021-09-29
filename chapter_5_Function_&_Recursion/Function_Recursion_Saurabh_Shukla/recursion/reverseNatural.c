#include <stdio.h>

void printt(int n);
int main()
{
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  printt(n);

  // printf("%d ", printt(n));

  return 0;
}

void printt(int n)
{
  if (n>= 1){
    printf("%d ", n);
    printt(n - 1);
  }
  else
  {
//  printf("0 ");
  }
}