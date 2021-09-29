#include <stdio.h>
#include <string.h>

typedef struct employee
{
  int code;
  float salary;
  char name[10];
} emp;

void show(emp emp1)
{
  printf("The code of employee is %d\n", emp1.code);
  printf("The code of employee is %f\n", emp1.salary);
  printf("The code of employee is %s\n", emp1.name);
}

int main()
{
  // Declaring e1 and ptr
  struct employee e1;
  struct employee *ptr;

// pointing ptr to e1
  ptr = &e1;
  

  ptr->code = 101;
  ptr->salary = 11.01;
  strcpy(ptr->name,"suman");
 show(e1);

  return 0;
}