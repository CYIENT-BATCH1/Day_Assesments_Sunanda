#include <stdio.h>
#define size 10				//Declare size macro 
int main() {
    int a[size], mid, data;		//Declare variables			
    int left=0, right=(size-1);
    printf("Enter the elements of array : ");		//take array elements as user input
    for(int i=0; i<size; i++){
      scanf("%d", &a[i]);   				//read user inputs.
    }
    
    printf("Enter the data to be searched : ");		//enter the element to be searched 
    scanf("%d", &data);					//read value
    
    while(left<right){					//loop to check whether left value is less than right value.
        mid=(left+right)/2;				//calculate middle value
        
        if(data==a[mid])				//check if the data to be searched is equals to middle value
        printf("%d", mid);				//print midlle value
        else if(data<a[mid])				//check if data is less than middlevalue
        right=(mid-1);					//update right side value
        else						//if false
        left=(mid+1);					//update left value
    }
    printf("No data found\n");
    return 0;
}
