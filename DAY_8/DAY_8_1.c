#include<stdio.h>
#include<stdlib.h>
int flip_bits(int a, int p)	//Define function with two argument pass
{
int result;
int mask = (1<<p);	//Create a mask
a = a^mask;		//exoring mask with input value
result = a;		//Store result in separate variable
return result;		//Return result
}
int main()
{
         int x, y;	//Declare variables
         printf("Enter value of x:\n");
         scanf("%x",&x);
         printf("Enter value of y:\n");
         scanf("%x",&y);
         int res = flip_bits(x,y);	//call function flip_bits() 
         printf("%x", res);		//Print final result
}
