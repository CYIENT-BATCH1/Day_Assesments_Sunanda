#include <stdio.h>
int main()
{
  int ADCON,CMCON,pos=3,pos1=6,pos2=7;	//Declare and initialize positions and input value
  printf("enter the values");		//take user input.
  scanf("%d%d",&ADCON,&CMCON);		//read user input.
  if((48 & ADCON) == 48)		//check whether ADCON is equals to 48.
  {
      CMCON=CMCON|(1<<pos)|(1<<pos1)|(1<<pos2);	//set the bits at bits position
      printf("%d",CMCON);
  }
  else
  printf(" ADCON is not equal to 0x30\n");	//print ADCON doesn't have 48 or 0x30

}
