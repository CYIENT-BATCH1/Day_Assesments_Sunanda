#include<stdio.h>
    int main(){	
    int T0CON=0xfa;	//Initialize T0CON
    int pos=3;		//pos = 3rd bit position
    int pos1=7;		//pos = 7th bit posotion
    T0CON=T0CON|(1<<pos)|(1<<pos1);	//left shit the bits, and with T0CON value.
    printf("%x",T0CON);			//Print T0CON value after setting bits
}
