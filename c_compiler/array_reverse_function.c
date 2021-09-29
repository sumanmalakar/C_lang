#include <stdio.h>

void reverse(int a[], int c[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {

    int temp;
    temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;

    c[i] = a[i];
    c[n - i - 1] = a[n - i - 1];

    if (n % 2 != 0)
    {
      c[(n + 1) / 2 - 1] = a[(n + 1) / 2 - 1];
    }
  }
}

int main()
{
  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  printf("Enter %d element of array \n",n);
  int a[n], c[n];

  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &a[i]);
  }

  reverse(a,c, n);

  for (int i = 0; i < n; ++i)
  {
    printf("%d ", c[i]);
  }

  return 0;
}
