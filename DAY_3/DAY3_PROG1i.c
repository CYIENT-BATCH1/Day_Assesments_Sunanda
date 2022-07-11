/*1)Write a program to achieve below statements.
	
	I) Collect 15 elements (8 integers, 7 float) as i/p from user. 
	II) Calculate and Print the sum, average of integers
	III) Calculate and Print the sum, average of all float values
	IV) Divide sum in statement â€˜bâ€™ with statement â€˜câ€™ sum and print the value.
	V) Divide average in statement â€˜bâ€™ with statement â€˜câ€™ average and print the value */
	
	
		#include <stdio.h>
		#include <stdlib.h>

		int main(void)
		{
  		  int sum1 = 0; 
   		  float sum2=0;
		  int size1 = 8, size2 = 7;
		  int arr1[size1];
	          float arr2[size2];
                  //operations on integer inputs
	          printf("Enter the Integers :\n");
	          fflush(stdout);
	          for(int i=0; i<size1; i++)
		  {
	    	      scanf("%d", &arr1[i]);
	              sum1 = sum1 + arr1[i];
		  }
	          float avg1 = sum1/size1;
	          printf("The sum of integers is:%d\n",sum1);
	          printf("The average of integers is:%.2f\n",avg1); 
	
		  //Operations on float inputs	
	          printf("Enter the float numbers:\n");
	          for(int j=0; j<size2; j++)
	           {
	               scanf("%f", &arr2[j]);
	               sum2 = sum2+arr2[j];
	           }
		 float avg2 = sum2/size2;
		 printf("The sum of integers is:%.2f\n",sum2);
		 printf("The average of integers is:%.2f\n",avg2);
	
		 float divide1 = sum1/sum2;
		 printf("The division of %d and %.2f is %.2f\n",sum1, sum2, divide1);
	
		 float divide2 = avg1/avg2;
		 printf("The division of %.2f and %.2f is %.2f\n",avg1, avg2, divide2);
		 
		 return 0;
       		}
