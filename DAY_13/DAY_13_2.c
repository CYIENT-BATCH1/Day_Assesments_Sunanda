#include <stdio.h>
int main(){
    int Sensor_Values[20][1];
    int i,j,k;
    printf("enter values\n");
    for(i=0;i<200;i+=10){
        for(j=0;j<1;j++){
            scanf("%x",&Sensor_Values[i][j]);
         }
     }
    //Check condition for corrupted data and print that time stamp at which it occurs
    printf("\n");
    printf("******************Time stamp of corrupted data************************\n");
    for(i=0;i<200;i+=10){
        for(j=0;j<1;j++){
            for(k=0;k<3;k++);
             if(Sensor_Values[i][j]==0x00||Sensor_Values[i][j]==0xFF)
             break;
            else
              printf("valid sensor data %d\n",i);
            }
         }
     //check the condition for non-corrupted data and print the time stamp at which it occurs
    printf("\n");
    printf("******************Valid data************************\n");
    for(i=0;i<200;i+=10){
        for(j=0;j<1;j++){
            if(Sensor_Values[i][j]==0x00||Sensor_Values[i][j]==0xFF)
            printf("corrupted data %d\n",i);
            else
            continue;
        }

    }
 }
