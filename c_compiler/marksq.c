#include <stdio.h>
 
	int marks_summation(int number_of_students, int *marks ,char gender){
		
		int sum1 =0; int sum2=0;
		
		for(int i=0; i<number_of_students; i++){
			if(i%2==0){
				sum1 = sum1 + marks[i];
				}
			else if(i%2!=0) {
				sum2 = sum2 + marks[i];
				}
			
			}
			if (gender == 'b'){
		return sum1;
		}
		else{
		return sum2;}
	
	
			
			
		}
	
	int main()
{
	int n;

	scanf ("%d\n", &n);
	
	int marks[n];
	for(int i=0; i<n; ++i){
		scanf ("%d", &marks[i]);
		}
		
		char ch = 'g' || 'b';


printf("%d",marks_summation(n, marks,ch));

	return 0;
}
 
