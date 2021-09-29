#include<stdio.h> 
#include<string.h>

 int main(){
   	

  char a[20] = "itrahB";
  
 
 int l = strlen(a);
   
		for(int i=0; i<l/2; i++){
		
		int temp;
		temp = a[i];
		a[i] = a[l-i-1];
		a[l-i-1] = temp;
		
		// c[i] = a[i];
		// c[l-i-1] = a[l-i-1];
		
		// if(l%2!=0){
		// 	c[(l+1)/2 - 1] =a[(l+1)/2 - 1]; }
		}
		printf("%s",a);

return 0;
}