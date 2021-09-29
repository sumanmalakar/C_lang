#include<stdio.h> 

void change(int a);
 int main(){
 
 int b = 345; 
 printf("The value of b before change is %d\n",b);
 change(b);
 printf("The value fo b after change is %d\n",b);
  

return 0;
}
void change(int a){
  a =77;
  // printf("%d\n",a);
}