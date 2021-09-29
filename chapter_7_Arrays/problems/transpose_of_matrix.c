#include<stdio.h> 

 int main(){

int a[3][4], i,j, sum = 0;
for(i=0; i<3; i++){
  for(j=0; j<4; j++){
    printf("Enter the element\t");
    scanf("%d", &a[i][j]);
  }
  printf("\n");
}

// for transpose output

for (j = 0; j < 4; j++)
{
  for (i = 0; i < 3; i++)
  {
    printf("%d\t", a[j][i]);
    sum = sum + a[j][i];
  }
  printf("\n");
}
  printf("The grand sum is %d " ,sum );

return 0;
}