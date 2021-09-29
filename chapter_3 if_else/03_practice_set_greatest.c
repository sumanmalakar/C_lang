#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Enter a\n");
  scanf("%d", &a);

  printf("Enter b\n");
  scanf("%d", &b);

  printf("Enter c\n");
  scanf("%d", &c);

  printf("Enter d\n");
  scanf("%d", &d);

  if (a > b && a > c && a > d)
  {
    printf("Greatest is %d ", a);
  }
  else if (b > a && b > c && b > d)
  {
    printf("Greatest is %d ", b);
  }
  else if (c > a && c > b && c > d)
  {
    printf("Greatest is %d ", c);
  }
  else if (d > a && d > b && d > c)
  {
    printf("Greatest is %d ", d);
  }

  return 0;
}