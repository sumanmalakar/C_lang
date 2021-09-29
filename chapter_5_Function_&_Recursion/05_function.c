#include <stdio.h>

void goodMorning();
void goodAfterNoon();
void goodNight();

int main()
{

  printf("This is my first function!\n");
  goodMorning();

  return 0;
}
void goodMorning()
{
  printf("Good Morning!\n");
  goodAfterNoon();
}
void goodAfterNoon()
{
  printf("Good AfterNoon!\n");
  goodNight();
}
void goodNight()
{
  printf("Good Night!\n");
}