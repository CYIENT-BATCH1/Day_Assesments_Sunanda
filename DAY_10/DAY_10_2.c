#include<stdio.h>
int main(){
    
    signed int G_Str_SteeringAngle_sint = -60;			//Initialize variable
    printf("\n");
    for(int j=12;j>=0;j--){
        printf("%x ",(G_Str_SteeringAngle_sint>>j)&1);		//print existing value of variable 
    }

    unsigned char G_Msg_SteeringInformation_Byte[3u]={0x00,0x00,0x00};		//Initialize array of size 3.

    G_Msg_SteeringInformation_Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2));		//store bit 11 to 10 in 0th index
    G_Msg_SteeringInformation_Byte[1]=(G_Str_SteeringAngle_sint>>2);			//store bit 9 to 2 in 1st index
    G_Msg_SteeringInformation_Byte[2]=(G_Str_SteeringAngle_sint<<6);			//store bit 1 to 0 in 2nd index 
        for(int i=0;i<3;i++){
           printf("\nG_Msg_EngineInformation_Byte[%d]:\n",i);
           for(int j=7;j>=0;j--)
              printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1);			//print the resultant valu of array
       }
    }
