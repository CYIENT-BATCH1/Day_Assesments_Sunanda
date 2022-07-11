/*1) We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11.
Print â€œSPECIALâ€ if the given non-negative number is special. Use the % "mod" operator.*/

			#include <stdio.h>

			int main()
			{
			    int num;
			    printf("Enter the number:\n");
			    scanf("%d\n",&num);
	    
			    if(num%11==0)
    
			        printf("SPECIAL\n");
			    else
			        printf("NOT SPECIAL\n");
        
			  //(num%11==0)||(num%11==1)?printf("SPECIAL"):printf("NOT SPECIAL");
		          return 0;
			}
