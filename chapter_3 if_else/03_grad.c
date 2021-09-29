#include <stdio.h>

int main()
{

  int marks;
  printf("Enter your marks\n");
  scanf("%d", &marks);

  if (marks >= 90 && marks <= 100)
  {
    printf("Your grad is A");
  }
  else if (marks >= 80 && marks <= 90)
  {
    printf("Your grad is B");
  }
  else if (marks >= 70 && marks <= 80)
  {
    printf("Your grad is c");
  }
  else if (marks >= 60 && marks <= 70)
  {
    printf("Your grad is D");
  }
  else if (marks < 33)
  {
    printf("Sorry Your fail!");
  }
  else
  {
    printf("You Successfully pass the examinatio");
  }

  return 0;
}