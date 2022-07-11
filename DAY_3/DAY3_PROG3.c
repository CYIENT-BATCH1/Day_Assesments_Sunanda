/*3)Write a program to reverse a 3-digit number which is entered from keyboard. */

	#include <stdio.h>

	int main()
	{
	  int n, n1, n2, n3, reverse;
    	  printf("Enter the number :");
    	  scanf("%d", &n);
    	  n1=n/100;
    	  n2=(n%100)/10;
          n3=(n%100)%10;
    	  printf("%d\n%d\n%d\n", n1, n2, n3);
          reverse=n3*100+n2*10+n1;
          printf("after reversing number %d the result is: %d\n", n, reverse);
          return 0;
	}
