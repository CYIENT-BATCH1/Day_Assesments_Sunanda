/*
 ============================================================================
 Name        : PROB2_2.c
 Author      : SUNANDA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define n 29
// AND gate logic if both the bits are not same then it returns 5
int andGate(int a, int b)
{
	if(a==b && a==1)
		return 1;
	else if (a==b && a==0)
		return 0;
	else
		return 5;
}
//

int main() {
	int ECU1[] = {0,0,1,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1};
	int ECU2[] = {0,0,1,0,0,1,1,1,0,1,0,0,1,1,1,1,1,1,1,1};
	int CAN_BUS[n];
	int i,j;
	//Displaying the content of input arrays
	printf("ECU1:   ");
	for(i=0;i<n;i++)
		{
			printf("%d",ECU1[i]);
			printf(" ");
		}
	printf("\n");
	printf("ECU2:   ");
	for(i=0;i<n;i++)
		{
			printf("%d",ECU2[i]);
			printf(" ");
		}
	printf("\n");

	//program logic
	for(i=0;i<n;i++)
	{
		j=andGate(ECU1[i],ECU2[i]);
		CAN_BUS[i]=j;
		if(j==5)
		{
			if(ECU1[i]==0)
			{
				printf("\nECU2 stopped transmitting at index %d",i);
				for(i;i<n;i++)
				{

					CAN_BUS[i]=ECU1[i];
				}
			}
			else
			{
				printf("\nECU1 stopped transmitting at index %d",i);
				for(i;i<n;i++)
				{

					CAN_BUS[i]=ECU2[i];
				}
			}
			break;
		}


	}

	//Display the Output
	printf("\n\n");
	printf("CAN_BUS:");
		for(i=0;i<n;i++)
		{
			printf("%d",CAN_BUS[i]);
			printf(" ");
		}
	return 0;
}


