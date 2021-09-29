#include<stdio.h> 

float force(float mass);
 int main(){
   float m;
   printf("Enter the mass in kgs\n");
   scanf("%f", &m);

  //  printf("The value of force in Newton is %.2f\n", force(m));

/* %.1f mtlb point ke baad kitne digit chahiye
%.2f decimal ke baad 2 digit */

   printf("The value of force in Newton is %.2f\n", force(m));

   return 0;
}
float force(float mass){
  return mass*9.8;
}
