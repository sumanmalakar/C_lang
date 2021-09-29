#include <stdio.h>

int main()
{

  int length, breathe;

  printf("Enter the length  of rectangle \n");
  scanf("%d", &length);

  printf("Enter the breath  of rectangle \n");
  scanf("%d", &breathe);

  int a = length * breathe;
  
  printf("The area of this rectangle is %d", a);

  return 0;
}