#include<stdio.h>

int name(int);
void main()
{

  name(4); 
}

int name(int x)
{
  if (x == 0)
  {
    return printf("SumanMalakar");
  }
  int c;
  c = printf("suman\n");
  name(x - 1);
  return c;
}