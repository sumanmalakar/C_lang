#include <stdio.h>

int main()
{

  int p, c, m;
  float marks;

  printf(" Please enter your marks in different subjects :- \n ");

  printf("In Maths \n");
  scanf("%d", &m);

  printf("In Physics\n ");
  scanf("%d", &p);

  printf("In Chemistry \n");
  scanf("%d", &c);

  marks = (p + c + m) / 3;

  if ((marks < 40) || p < 33 || m < 33 || c < 33)
  {
    printf("your percentage  is %f  and you are failed ", marks);
  }
  else
  {
    printf("your percentage is %f and you are pass! ", marks);
  }

  return 0;
}