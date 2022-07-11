#include <stdio.h>
int main() {
   int arr[10]={6,12,0,18,11,99,55,45,34,2};		//Initialize the array
   int n=10;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) {			//run a outer loop till i<(n-1)
      position = i;					//store value of i in position
      for (j = i + 1; j < n; j++) {		        //run an inner loop till j<n
         if (arr[position] > arr[j])			//check if position is greater than jth value
            position = j;				//store j value in position
      }
      if (position != i) {				//check if position is not equals to ith value
         swap = arr[i];					//transfer i value to swap varaiable
         arr[i] = arr[position];			//transfer position to i
         arr[position] = swap;				//transfer swap value to position
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);				//print the array result
   return 0;
}
