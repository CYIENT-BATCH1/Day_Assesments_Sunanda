/*II) Calculate and Print the sum, average of integers*/

		#include <stdio.h>
	   	#include <stdlib.h>

		int main(void)
		{
    		     int sum = 0;
		     int size1 = 8;
	             int size2 = 7;
	             int arr1[size1];
	             float arr2[size2];

	        printf("Enter the Integers :\n");
	        fflush(stdout);
	        for(int i=0; i<size1; i++)
		 {
		    scanf("%d", &arr1[i]);
		    sum = sum + arr1[i];
		 }
	
		float avg = sum/size1;
		printf("The sum of integers is:%d\n",sum);
		printf("The average of integers is:%.2f\n",avg);
	
		printf("Enter the float numbers:\n");
		for(int j=0; j<size2; j++)
			scanf("%f", &arr2[j]); 
		return 0;
		}
