#include <stdio.h>

int main()
{

  int rating;

  printf("Enter rating \n");
  scanf("%d", &rating);

  switch (rating)
  {
  case 1:
    printf("This is very Bad for our company!");
    break;
  case 2:
    printf("We are improving!");
    break;
  case 3:
    printf("Thanks for rating!");
    break;
  }

  return 0;
}