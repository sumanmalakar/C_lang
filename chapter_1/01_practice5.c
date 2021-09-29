#include <stdio.h>

int main()
{

  int principle, rate, time;

  // int p = (principle * rate * time) / 100;

  printf("Enter the principle, rate, time \n");
  scanf("%d %d %d", &principle, &rate, &time);


  int simpleInterest = (principle * rate * time) / 100;

  printf("Your Simple interest is %d", simpleInterest);

  return 0;
}