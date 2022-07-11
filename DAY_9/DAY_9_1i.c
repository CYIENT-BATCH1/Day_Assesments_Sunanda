#include <stdio.h>
int main()
{
int SSPSTAT, mask, res, p1, p2, p3;	//Declare variables.
printf("Enter the number:\n");		//User Input	
scanf("%x",&SSPSTAT);			//read user input	
printf("Enter the position p1:\n");	
scanf("%d", &p1);			//read bit position1
printf("Enter the position p2:\n");	
scanf("%d", &p2);			//read bit position2
printf("Enter the position p3:\n");
scanf("%d", &p3);			//read bit position3

mask = (~((1<<p1)|(1<<p2)|(1<<p3)));	//Create a mask
res = SSPSTAT & mask;			//anding mask with SSPSTAT value
printf("%x\n", res);			//printing resultant output
}
