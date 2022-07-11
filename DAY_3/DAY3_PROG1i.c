/*1)Write a program to achieve below statements.
	
	I) Collect 15 elements (8 integers, 7 float) as i/p from user. */
		
		#include <stdio.h>
		#include <stdlib.h>

		int main(void)
		{
		   int size1 = 8;
		   int size2 = 7;
		   int arr1[size1];
	           float arr2[size2];

	           printf("Enter the Integers :\n");
	           fflush(stdout);
	           for(int i=0; i<size1; i++)
		   	scanf("%d", &arr1[i]);

	  	   printf("Enter the float numbers:\n");
		   for(int j=0; j<size2; j++)
			scanf("%f", &arr2[j]);
	           return 0;
		}
