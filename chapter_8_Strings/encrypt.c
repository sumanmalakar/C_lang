#include<stdio.h> 
void encrypt(char *c){
  char *ptr = c;
  while(*ptr!='\0'){
    *ptr = *ptr + 1;
    ptr++;
  }
}

void decrypt(char *c){
  char *ptr = c;
  while(*ptr!='\0'){
    *ptr = *ptr - 1;
    ptr++;
  }
}

 int main(){
 char c[] = "suman malakar";
 encrypt(c);
 printf("Encrypted string is: %s", c);
 printf("\n");
 char de[] = "tvnbo!nbmblbs";
 decrypt(de);
printf("Decrypted string is: %s", de);
return 0;
}