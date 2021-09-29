#include<stdio.h> 
#include<string.h>

// The question is solve using ASCII character, so make sure you revese ASCII character before going to slove this question

// A = 65
// B = 66.... Z = 90

// a = 97, b = 98 ... z = 122


// strlwr(), strupr(), strrew()

 int main(){

  // char s1[20] = "SuMan";
  // strlwr(s1);
  // printf("%s", s1);

  char s1[30] = "Sum@N_MalakaR";

  for(int i=0; s1[i]!='\0'; i++){
    if(s1[i] >= 65 && s1[i]<= 90){
      s1[i] = s1[i] + 32;
    }
  }
  printf("%s",s1);

return 0;
}