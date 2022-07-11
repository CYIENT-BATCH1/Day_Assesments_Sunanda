#include <stdio.h>
int main()
{
    int size = sizeof (arr)/sizeof(arr[0]);				//calculate size of array
    char *arr[size] = {"Bosch","Capgemini", " ","Alstom","IBM"};	//declare pointer to an array
    int pos=0;								//Initialize position
   
    int i;
    for(i=0;i<size;i++){						//loop till i<size
        
        if(arr[i]==" "){						//if encouter null value in array
            
         arr[i]="Cyient";						//replace null with Cyient
         pos=i;
         //printf("%s",*(arr+i));
        }
        printf("%s\n",*(arr+i));					//print the new array
    }
     printf("Position = %d\n",pos);					//print the position where replaced
    return 0;
}
