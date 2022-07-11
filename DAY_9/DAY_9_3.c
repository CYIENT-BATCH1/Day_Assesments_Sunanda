#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, switch_status=0x00;
    int fault, f;
    int reg0, reg1,  reg2,i, faulty_type;
    int faulty_type1=1,n,n1,n2;
    int reg1_unbuckle=2;
    int buckle=3;
    int faulty_type2=4;
    int num;
    printf("enter the fault\n");
    scanf("%d",&num);
    switch(num){
    case 1:
          reg0 = switch_status|((1<<0)|(1<<1));
          reg1 = switch_status&(0x00);        // reg1 and reg2 are fault type1 and 0,1,4,5 bits set to 1
        reg2=switch_status|((1<<5)|(1<<4));
        for(i=7;i>=0;i--){
            n=(reg0>>i)&1;
            printf("%x",n);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg2>>i)&1;
               printf("%x",n1);
        }
               break;
        case 2:
        reg0=switch_status&(0x00);
        reg1=switch_status|((1<<7)|(1<<6)|(1<<0)|(1<<1));
        reg2=switch_status&(0x00);
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg0>>i)&1;
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg2>>i)&1;
               printf("%x",n);
        }
               break;
        case 3:
        reg0=switch_status&(0x00);
        reg1=switch_status|((1<<4)|(1<<5));
        reg2=switch_status|((1<<7)|(1<<6));
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg2>>i)&1;
                printf("%x",n2);
           }
           n2=0x00;
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;
               printf("%x",n);
        }
               break;
        case 4:
        reg0=switch_status|(1<<2)|(1<<3);
        reg1=switch_status|((1<<2)|(1<<3));
        reg2=switch_status&(0x00);
        for(i=7;i>=0;i--){
            n1=(reg1>>i)&1;
            printf("%x",n1);
        }
        n2=0x00;
        printf("\n");
               for(i=7;i>=0;i--){
                   n2=(reg2>>i)&1;
                printf("%x",n2);
           }
           printf("\n");
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;
               printf("%x",n);
        }
               break;

    }
}
