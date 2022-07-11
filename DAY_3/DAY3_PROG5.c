5)Right shift the value 0xFE by 3 bits and print the value

#include<stdio.h>
int main()
{
    unsigned char a = 0xFE;
    int res = a>>3;
    printf("%x", res);
    return 0;
}
