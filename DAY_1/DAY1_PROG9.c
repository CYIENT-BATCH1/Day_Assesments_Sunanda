/*9-Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0

              0,1

              1,0

              1,1*/ 


#include<stdio.h>
int main(){
int a,b,x,y,z;
printf("enter the value");
scanf("%d %d,&a,&b);
x=a&b;
y=a|b;
z=!a;
printf("%d %d %d",x,y,z);
}
