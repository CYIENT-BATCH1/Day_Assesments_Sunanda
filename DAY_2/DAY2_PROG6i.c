/*6)Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 

a) Celcuis to Ferh.*/

	#include<stdio.h>
int main()
{
    float c;
    printf("Enter the celcius:");
    scanf("%f", &c);
    float f = c * 9/5 + 32;
    printf("The temperature in Ferh is:%f",f);
}
