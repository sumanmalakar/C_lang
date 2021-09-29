#include <stdio.h>

int main()
{

  int age;

  printf("Enter your age\n");
  scanf("%d", &age);

  if (age >= 90)
  {
    // if(age != 90){
    printf("you are above 90, you cannot drive\n");
  }
  else
  {
    printf("You can dirve\n");
  }

  /*
 '=' operator is use to assigne value
  '==' operator is use to check equality of program or you could say check condition of statement
   */

  if (age >= 50)
  {
    // if (age = 50)
    {
      printf("you completed Half Century\n");
    }
    else
    {
      printf("You are still young!");
    }

    return 0;
  }