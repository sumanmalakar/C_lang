#include <stdio.h>
#include <string.h>

struct employee
{
  int code;
  float salary;
  char name[10];
};

int main()
{ struct employee suman = {100, 34.34, "suman"};

printf("code is %d \n", suman.code);
printf("salary is %f \n", suman.salary);
printf("Name is %d \n", suman.name);

return 0;
}