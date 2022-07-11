/*b) Ferh to Celcius:*/

#include<stdio.h>
int main()
{
    float f;
    printf("Enter the fer:");
    scanf("%f", &f);
    float c = ((f-32)*5)/9;
    printf("The temperature in celcius is:%f",c);
}
