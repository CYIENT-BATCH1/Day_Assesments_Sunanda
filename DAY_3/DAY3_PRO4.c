4)Convert decimal number 204 to hex value, binary value and print the same

//*****dec to binary*******//
#include <stdio.h>
int main() 
{
    int a[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    
    printf("\n Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}
