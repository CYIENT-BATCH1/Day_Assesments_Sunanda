/*10) Consider the weights of three people as user input. Find the heaviest among them and print it.*/

#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value");
scanf("%d %d %d",&a,&b,&c);
a>b&&a>c?printf("the largest is a"):b>a&&b>c?printf("the largest is b"):printf("the largest is c");
}
