#include<stdio.h>
#include<string.h> 
// Write a program to take string as input from the user using %c and %s. Confirm that the string are equal or not..?

 int main(){

  char st1[34];
  char st2[34];
  char c;
  int i = 0;

  printf("Enter the value of first string\n");
  scanf("%s", st1);

  printf("Enter the value of second string character by character\n");
  while(c!='\n'){
  fflush(stdin);
scanf("%c", &c);
    st2[i] = c;
    i++;
  }
  st2[i] = '\0';
  printf("The value of st1 is %s", st1);
  printf("The value of st1 is %s", st2);

printf("strcmp for these strings returns %d ", strcmp(str1, str2));

return 0;
}