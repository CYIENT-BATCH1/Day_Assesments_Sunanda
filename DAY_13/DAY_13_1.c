#include<stdio.h>
int main(){
//Declare variables and 2D array
   int Sensor_Values[10][2];
   int i, j;
//Take user input in an array
   for(i=0; i<10; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for a[%d][%d]:", i, j);
         scanf("%x", &Sensor_Values[i][j]);
      }
   }
  
    //Check condition and print time stamp of noisy data
    printf("\n");
    printf("******************Time stamp of noisy data************************\n");
    for(i=0; i<200; i+=10){
        for(j=0; j<1; j++){
            if(Sensor_Values[i][j]<0x05 || Sensor_Values[i][j]>0xf0){
              printf("data stamp = %d\n",i);  
            }
            else{
                printf("Do nothing\n");
            }
        }
     }
     
     
 //Check condition and print valid data and it's time stamp
    printf("\n");
    printf("******************Valid data************************\n");
    for(i=0; i<200; i+=10){
        for(j=0; j<1; j++){
            if(Sensor_Values[i][j]<0x05 || Sensor_Values[i][j]>0xf0){
                continue;
            }
            else{
                 printf("data stamp = %d and Sensor data = %x\n",i, Sensor_Values[i][j]);  
            }
        }
     }
  }
