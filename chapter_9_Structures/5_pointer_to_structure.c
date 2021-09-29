#include <stdio.h>
#include <string.h>

struct employee
{
  int code;
  float salary;
  char name[10];
};

int main()
{
  struct employee e1;
  struct employee *ptr;
  
  ptr = &e1;
  // (*ptr).code = 101; or you can also write: ptr->code = 101;
  ptr->code = 101;
  printf("%d", e1.code);

  // printf("code is %d \n", suman.code);
  // printf("salary is %f \n", suman.salary);
  // printf("Name is %d \n", suman.name);

  return 0;
}