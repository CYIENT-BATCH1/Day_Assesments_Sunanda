/*1)Consider the phone number of a person as user input and find the sum of its digits. */

	#include <stdio.h>
int main()
{
    int num, sum=0, tem;
    printf("Enter the number:");
    scanf("%d", &num);
    start:
        tem = num%10;
        sum = sum+tem;
        num = num/10;
        if(num>0)
        goto start;
        printf("The sum of numbers is:%d", sum);
        return 0;
}
