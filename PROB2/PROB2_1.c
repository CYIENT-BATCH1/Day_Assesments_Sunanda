#include <stdio.h>
#define n 12
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

//Function to convert hexadecimal to binary
void HextoBin(char *hex)
{
	long int i = 0;

	while(hex[i]){

		switch(hex[i]){

		case '0':
            printf("0000");
            break;

		case '1':
            printf("0001");
            break;

		case '2':
            printf("0010");
            break;

		case '3':
            printf("0011");
            break;

		case '4':
            printf("0100");
            break;

		case '5':
			printf("0101");
			break;

		case '6':
            printf("0110");
            break;

		case '7':
            printf("0111");
            break;

		case '8':
            printf("1000");
            break;

		case '9':
			printf("1001");
			break;

		case 'A':
		case 'a':
            printf("1010");
            break;

		case 'B':
		case 'b':
			printf("1011");
			break;

		case 'C':
		case 'c':
			printf("1100");
			break;

		case 'D':
		case 'd':
			printf("1101");
			break;

		case 'E':
		case 'e':
			printf("1110");
			break;

		case 'F':
		case 'f':
			printf("1111");
			break;
		}
		i++;
	}
}

//Driver code
int main() {
	int ECU1[] = {0,0,1,0,0,0,1,1,0,1,0,0};
	int ECU2[] = {0,0,1,0,0,1,1,1,0,1,0,0};
	int CAN_BUS[12];
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


