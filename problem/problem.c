#include<stdio.h> 

void find(int arr[], int size, int k){
  int g;

for(int i =  0; i<size; i++){
      if(arr[i] == k){
        g = arr[i];
        printf("yes");
      }
}
  if(g != k ){
    printf("no");
  }
}


 int main(){

int k = 1; 
  int arr[] = {1, 40, 3, 4};

find(arr, 4, k);
  
  
return 0;
}