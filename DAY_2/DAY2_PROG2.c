/*2)A message ID is required to send data via CAN communication between ECUâ€™s.
Accept a random 2-digit message ID from the user to send data. 
Keep in mind that the given ECU only accepts binary form of the message ID. 
Write a program to convert the 2-digit ID to binary form. */
		

#include<stdio.h>
int main()
{
int arr[10], n, i;
printf("Enter the decimal number:");
scanf("%d", &n);
    for(i=0;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
         printf("%d", arr[i]);
    }
}
