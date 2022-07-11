#include <stdio.h>
int main()
{
    int SSPSTAT=0x55, res1, res2, res3;	//declare variables
    if(SSPSTAT==0x55){
        res1 = ((SSPSTAT>>7)&1);	//right shifting SSPSTTA by 7 times, anding the result with 1 and store it it in res1
        res2 = ((SSPSTAT>>1)&1);	//right shifting SSPSTTA by 1 times, anding the result with 1 and store it it in res2
        res3 = ((SSPSTAT>>2)&1);	//right shifting SSPSTTA by 2 times, anding the result with 1 and store it it in res3
    }
    printf(" %d\n %d\n %d\n", res1, res2, res3);	//printing all the results
}
