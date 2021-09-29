 #include<stdio.h> 
 #include<string.h>

 
  int main(){

    int count = 0 , i = 0;
    char name[10];
    printf("Enter name ");
    gets(name);

    // count = strlen(name);
    // printf("The string length is %d ", count);
 
 while(name[i] != '\0')
 {
   count ++;
   i ++;
 }
 printf("%d", count);


   
 
 return 0;
 }