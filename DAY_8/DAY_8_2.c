#include <stdio.h>
void main()
{
   int *p,i,j,temp,el;
   printf(" Input the number of elements to store in the array : ");	//Ask user to enter elements
   scanf("%d",&el);
   printf(" Input %d number of elements in the array : \n",el);	
   for(i=0;i<el;i++)
      {
  printf(" Element - %d : ",i+1);		
	  scanf("%d",p+i);
	  }   
   for(i=0;i<el;i++) {
    for(j=i+1;j<el;j++){
       if( *(p+i) > *(p+j)) {				//Chcek if present element is greater than next
       temp = *(p+i);					//perform swapping
      *(p+i) = *(p+j);
      *(p+j) = temp;
       }}}
     printf("\n The elements in the array after sorting : \n");
   for(i=0;i<el;i++){
	  printf(" element - %d : %d \n",i+1,*(p+i));		//print the final value after sorting
	  }         
printf("\n");
}
