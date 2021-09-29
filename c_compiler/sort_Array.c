#include<stdio.h> 

void sort(int a[], int n){
  int temp;
  for(int i = 0; i<n; i++){
    if(a[i]>a[i+1]){
      temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
    }
  }
}

 int main(){
int n;
printf("enter the size\n");
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
  scanf("%d", &arr[i]);
}
sort(arr, n);
for (int i = 0; i < n; i++)
{
  printf("%d ", arr[i]);
}

return 0;
}