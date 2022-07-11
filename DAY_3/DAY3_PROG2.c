/*2) Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.*/

		#include<stdio.h>
		int main()
		{
 		    int a[5], add;
 		    int len=sizeof(a)/sizeof(a[0]);
 		    int i;
 		    for (i = 0; i < len; i++)
  		      {
        		scanf("%d", &a[i]);
        		if(a[0]==a[i]||a[3]==a[i])
       			 {
        		    add = a[0] + a[3];
       			 }
    		     }
  		    printf("%d\n", add);
  		    return 0;
                }
