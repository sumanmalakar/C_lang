#include <stdio.h>

int main()
{

  float income, taxPay;

  printf("Enter your income \n");
  scanf("%f", &income);

  if (income >= 250000 && income <= 500000)
  {
    taxPay = income * 5 / 100;
  }
  else if (income >= 500000 && income <= 1000000)
  {
    taxPay = income * 20 / 100;
  }
  else if (income >= 1000000)
  {
    taxPay = income * 30 / 100;
  }
  printf("You have to pay %f rs to goverment as Tax", taxPay);

  return 0;
}