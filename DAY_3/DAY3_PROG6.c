6)Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift

#include<stdio.h>
int main()
{
   int n, s, res;
   printf("Enter the value of n as hex:\n")
   sacnf("%x",&n);
   printf("Enter the value of s:\n")
   sacnf("%d",&s); 
   res = n>>s;
   printf("%x", res);
}  
