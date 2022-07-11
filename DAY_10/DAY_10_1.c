#include<stdio.h>
int main(){
   
    unsigned char G_Eng_EngineTemperature_uchar = 50u;			//Initialize and declare variables
    for(int i=7;i>=0;i--){
        printf("%x ",(G_Eng_EngineTemperature_uchar>>i)&1);		//print the existin value
    }

    unsigned int G_Eng_EngineRpm_uint = 1000u;				//Initialize and declare variables
    printf("\n");
    for(int j=12;j>=0;j--){
        printf("%x ",(G_Eng_EngineRpm_uint>>j)&1);			//print the existin value
    }
    unsigned char G_Msg_EngineInformation_Byte[5u]={0x00,0x00,0x00,0x00,0x00};	//initialize array
    G_Msg_EngineInformation_Byte[3]=(G_Eng_EngineTemperature_uchar);		//store engine temperature value in 3rd index of array
    G_Msg_EngineInformation_Byte[0]=((G_Eng_EngineRpm_uint>>9)&1);		//right shift engine rpm by 9 times and it with 1, store in 0th index
    G_Msg_EngineInformation_Byte[2]=(G_Eng_EngineRpm_uint<<8);			//left shift engine rpm by 8 times and it with 1, store in 2nd index
    G_Msg_EngineInformation_Byte[1]=((G_Eng_EngineRpm_uint>>1)&0xff);		//right shift engine rpm by 1 time and it with 0xFF, store in 1st index
    for(int i=0;i<5;i++){
	printf("\nG_Msg_EngineInformation_Byte[%d]:\n",i);
	for(int j=7;j>=0;j--)
           printf("%d ",(G_Msg_EngineInformation_Byte[i]>>j)&1);		//print the array resultant values
       }
    }
