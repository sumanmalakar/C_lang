#include<stdio.h>

void reverse(int *arr, int n)
{
  for (int i = n; i >= 0; i--)
  {
    printf("%d\t", arr[i]);
  }
}
 int main(){

  int arr[] ={} ,n=5;
 
    // printf("Enter the size of Array\t");
    // scanf("%d", &n);

    printf("\n");
    for (int i = 0; i < n ; i++)
    {
      printf("Enter the element of Array\t");
      scanf("%d", &arr[i]);
  }
  printf("\n");
  printf("\n");

  reverse(arr,n);

return 0;
}
