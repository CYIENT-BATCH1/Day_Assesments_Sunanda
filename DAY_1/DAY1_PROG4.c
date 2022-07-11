/*4) Take a 6-digit number as input from the user and reverse the number. Make sure that the number does not include a â€˜0â€™ in any of its digits.*/
			
   				#include <stdio.h>
				#include <stdlib.h>

				int main(void)
			  {
				int rev=0, n;
				puts("Enter the number: \n");
				scanf("%d", &n);
				while(n>0)
				 {
					rev = rev*10 + n%10;
					n = n/10;
			       	}
				printf("Reversed number = %d", rev);
				return 0;
			}
