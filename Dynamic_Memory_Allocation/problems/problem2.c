#include <stdio.h>
#include <stdlib.h>

// create an array dynamically capable of storing 5 integer. Now use realloc so that it can now store 10 intergers

int main()
{

  int *ptr;

  ptr = (int *)malloc(5 * sizeof(int));

  for (int i = 0; i < 5; i++)
  {
    printf("Enter the value of %d element: \n", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("The value fo %d element is : %d\n", i, ptr[i]);
  }

  // Reallocate ptr using realloc()
  ptr = realloc(ptr, 10 * sizeof(int));
  for (int i = 0; i < 10; i++)
  {
    printf("Enter the value of %d element: \n", i);
    scanf("%d", &ptr[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("The value of %d element is %d\n", i, ptr[i]);
  }

  return 0;
}