/*5) 5 balls are numbered with random 1-digit number each. Assign these numbers using user input. 
   Print whether each ball is assigned odd or even number.*/

				#include <stdio.h>
				#include <stdlib.h>

				int main(void)
			     {
				int n;
				puts("Enter the number:");
				scanf("%d", &n);
 				   if(n%2==0)
 				        printf("Ball is assigned even number\n");
 				   else
  				        printf("Ball is assigned odd number\n");
				return 0;
		              }
