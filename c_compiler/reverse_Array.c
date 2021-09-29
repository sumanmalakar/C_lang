#include <stdio.h>
 
int main()
{
	int n;
	scanf ("%d\n", &n);
	int a[n],c[n];
	
	for(int i=0; i<n; ++i){
		scanf ("%d", &a[i]);
		}
		
		for(int i=0; i<n/2; i++){
		
		int temp;
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
		
		c[i] = a[i];
		c[n-i-1] = a[n-i-1];
		
		if(n%2!=0){
			c[(n+1)/2 - 1] =a[(n+1)/2 - 1]; }
		}
		
			
			
	  
	for(int i=0; i<n; ++i){
		printf ("%d ", c[i]);
		}
	return 0;
}

