	/*VI) Convert all 7 float values to integers and print them.*/

		#include <stdio.h>
		#define SIZE 7
		int main()
		{
    		    int i;
    		    float n[SIZE];
                    int t[SIZE];
                    printf("Enter the float values\n");
    		    for(i=0; i<SIZE; i++)
  		      {
        		scanf("%f\n",n[i]);
        		t[i]=(int)n[i];
    		      }
    	        printf("The integers are%d",t[i]);
                return 0;
		}
