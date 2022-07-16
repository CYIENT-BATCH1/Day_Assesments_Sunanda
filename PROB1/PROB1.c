/*
 ============================================================================
 Name        : PROB1_1.c
 Author      : SUNANDA S.
 Version     : V1
 Copyright   : Your copyright notice
 Description : PROBLEM 1
 ============================================================================
 */

#include <stdio.h>
//Note: 0x05 = 5 and 0xF5 = 245 and 0x55 = 85
// function topPrint the user input
void printArray(int a[],int l,char c[])
{
	printf("\n\n%s time stamp | %s data\n\n", c,c);
	int i=0;
	for (i;i<l;i++)
	{
		printf("%13d | ",i);
		printf("%5d\n", a[i]);
	}
}
void printInput(int a[],int b[],int c[],int l)
{
	printArray(a,l,"PR");
	printArray(b,l,"PC");
	printArray(c,l,"PL");
}

// Logic to Construct F_P_Data array
int checkNoise(int a[],int i,char c)
{
	int true = 1;
	while(true)
	{
		if (i>=51)
		{
			printf("Error in P%c: input array needs more elements searchIndex = %d\n", c,i);
			break;

		}
		else if (a[i]<5||a[i]>245)
		{
			printf("In array P%c Noise Value: %d at Index %d \n",c, a[i], i);
			i=i+5;
		}
		else
		{
			return a[i];
			break;
		}

	}
	return 0;

}

int *Calculate_P_F_Data(int a[],int b[],int c[],int l)
{
	static int d[10];
	int i;
	int flag=0;
	for(i=0;i<10;i++)
	{
		if (flag == 0)
		{
			d[i]=checkNoise(a,i*5,'R');
			flag = 1;
		}
		else if (flag == 1)
		{
			d[i]=checkNoise(b,i*5,'C');
			flag = 2;
		}
		else if (flag == 2)
		{
			d[i]=checkNoise(c,i*5,'L');
			flag = 0;
		}
	}
	return d;
}

//Airbag deployment logic

void airbagDeployment(int *a,int l)
{
	int flag=0;
	int i;
	int j=0;
	for(i=0;i<l;i++)
	{
		if ((*a+i)>85)
		{
			flag=flag+1;
			if(flag==5)
			{
				printf("Deploy Pedestrian Airbag\nValues Considered:\n");
				for(j=0;j<5;j++)
				{
					printf("F_P_Data + %d : %d\n", j, *(a+i - j));
				}
				break;
			}
		}
		else
		{
			flag=0;
		}
	}
	if(flag<5)
	{
		printf("Pedestrian Airbag NOT Deployed");
	}

}
int main()
{
	int PR[] = {0, 220, 111, 55, 60, 197, 109, 14, 216, 75, 24, 108, 214, 118, 241, 132, 37, 152, 66, 207, 105, 138, 36,
	223, 87, 91, 98, 50, 16, 192, 113, 54, 29, 8, 22, 12, 65, 28, 20, 211, 125, 11, 203, 34, 127, 4, 38, 160, 184, 41,100};

	int PC[] = {221, 161, 42, 249, 62, 460, 48, 133, 196, 184, 86, 31, 229, 20, 244, 200, 83, 185, 113, 171, 176, 147, 139,
	 123, 36, 116, 40, 145, 79, 167, 96, 25, 114, 131, 188, 89, 91, 115, 159, 168, 30, 166, 132, 14, 234, 34, 99, 11, 19, 231,100};

	int PL[] = {141, 101, 99, 90, 87, 199, 88, 170, 24, 74, 233, 25, 216, 102, 83, 27, 39, 232, 225, 215, 51, 93, 204, 97,
	109, 44, 152, 228, 173, 57, 124, 146, 119, 13, 34, 132, 156, 217, 155, 235, 68, 189, 206, 40, 194, 125, 106, 85, 94, 131,100};

	int *F_P_Data;
	int i;
	int F_P_Data_Flag=0;
	int true = 1;

	while(true)
	{
		int inputvalue;
		printf("\n------------------------------------------------------------------\n\n");
		fflush(stdout);
		printf("Please select one option:\n1) Display input arrays\n2) Calculate F_P_Data\n3) Airbag Deployment\n4)Exit\n\nUser Input:");
		fflush(stdout);
		scanf("%d",&inputvalue);
		printf("\n------------------------------------------------------------------\n\n");
		if(inputvalue==1)
		{
			printInput(PR,PC,PL,51);
		}
		else if(inputvalue==2)
		{
			F_P_Data_Flag=1;
			F_P_Data = Calculate_P_F_Data(PR,PC,PL,51);
			for ( i = 0; i < 10; i++ )
			{
      			printf( "F_P_Data [ %d ] : %d\n", i, *(F_P_Data + i));
  			}
		}
		else if(inputvalue==3)
		{
			if(F_P_Data_Flag==0)
			{
				printf("F_P_Data not yet calculated Please calculate F_P_Data and proceed...\n");
			}
			else
			{
				airbagDeployment(F_P_Data,10);
			}

		}
		else
		{
			printf("Thanks\n");
			break;
		}
	}

	//printf("hi\n\n");
	//printInput(PR,PC,PL,51);
	//F_P_Data = Calculate_P_F_Data(PR,PC,PL,51);
	//for ( i = 0; i < 10; i++ ) {
    //  printf( "F_P_Data + %d : %d\n", i, *(F_P_Data + i));
    //}

    //airbagDeployment(F_P_Data,10);
	return 0;
}
