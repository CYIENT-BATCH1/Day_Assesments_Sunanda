#include <stdio.h>
int main()
{
  int ADCON0, CMCON;		 //Declare variables.
  printf("enter the values");	
  scanf("%d%d",& ADCON0,& CMCON); //Scanf inputs
  if((28 & ADCON0) == 28)	//check condition
  {
      CMCON= CMCON&0xF0;	//anding CMCON
      printf("%d", CMCON);	//Print CMCON
  }
  else
  printf(" Condition failed\n");

}
