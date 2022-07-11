#include<stdio.h>
int main(){

    int a[]={1,4,5,6,7};	//Initialize the arrays
    int b[]={4,6,3,1,3};
    int c[]={3,6,8,4,1};
    int i,j,k;			//Declare variables

    for(i=0;i<5;i++){		//outer loop

        for(j=0;j<5;j++){	//inner loop

            if(a[i]==b[j])	//if i == j

            for(k=0;k<5;k++){	//2nd inner loop
                
                if(b[j]==c[k])	//if j==k

                printf("%d\n",c[k]); //print the common value
            }

        }

    }
}
