
/*3) The entire area of a circular garden is to be covered with grass by a Gardener. 
The radius of the garden is given by the user input. Calculate the area that has to be covered.*/
			
		        #include <stdio.h>

			int main()
			{
  			  float area, r;
   			  printf("Enter the radius : \n");
   			  scanf("%f", &r);
   			  area = 3.14 * r * r;
    			  printf("The area is %f", area);
    		          return 0;
			}
