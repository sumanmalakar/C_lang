
 
 
int marks_summation(int *marks ,int number_of_students ,char gender){
		
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
		else {
		return sum2;}
		}