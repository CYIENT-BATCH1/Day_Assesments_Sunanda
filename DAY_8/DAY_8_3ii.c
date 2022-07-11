#include <stdio.h>
int main(){
   int T0CON = 0xf3, x, i;
   for(i=2; i>=0;  i--){
    x = (T0CON>>i)&1;
   printf("%x",x);
   }
