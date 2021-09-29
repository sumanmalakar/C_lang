#include <stdio.h>

float avg(int x, int y, int z);

int main()
{
  int a, b, c;
  printf("Enter the three no.\n");
  scanf("%d", &a);
  printf("Enter the three no.\n");
  scanf("%d", &b);
  printf("Enter the three no.\n");
  scanf("%d", &c);

  printf("The avg = %f", avg(a,b,c));
  return 0;
}
float avg(int x, int y, int z)
{
  float  avg;
  return avg = (float) (x + y + z) / 3;
}