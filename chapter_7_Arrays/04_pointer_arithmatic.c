  #include<stdio.h> 
  
   int main(){

     // 
  
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; // yha interger ka size 4 byte hai mere computer me isiliye 4 increase ho rha hai
    // ptr--;
    // ptr++; // ptr = ptr + 1 

    // printf("The value of ptr is %u\n", ptr);

    // char a = 'x';
    // char *ptr = &a;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; // yha charecter ka size 1 byte hai mere computer me isiliye 1 increase ho rha hai
    // ptr--; // ptr = ptr - 1
    // ptr++; // ptr = ptr +1

    // printf("The value of ptr is %u\n", ptr);

    float a = 2.3;
    float *ptr = &a;
    printf("The value of ptr is %u\n", ptr);
    ptr++; // yha charecter ka size 4 byte hai mere computer me isiliye 4 increase ho rha hai
    // ptr--; // ptr = ptr - 1
    ptr++; // ptr = ptr +1

    printf("The value of ptr is %u\n", ptr);

    return 0;
  }