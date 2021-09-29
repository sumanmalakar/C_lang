#include<stdio.h> 
//Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array in the screen

void display(int a[2][2]);
 int main(){
int a[2][2], i,j;
for(i=0; i<=1; i++){
  for(j=0; j<=1; j++){
    printf("Enter the element of array\t");
    scanf("%d", &a[i][j]);
  }
  printf("\n");
}
display(a[2][2]);
void display(int a[2][2])
{
  // int i,j;

  for (int i = 0; i <= 1; i++)
  {
    for (int j = 0; j <= 1; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

return 0;
}