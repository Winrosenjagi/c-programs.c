// program to find the compound interest
#include <stdio.h>
int main() {
    int rate,principleamount,time,numberoftimes,compoundinterest;
    printf("enter rate :");
    scanf("%d",&rate);
    printf("enter principleamount :");
    scanf("%d",&principleamount);
    printf("enter time :");
    scanf("%d",&time);
    printf("enter the number of times:");
    scanf("%d",&numberoftimes);
    compoundinterest=principleamount*(1+rate/numberoftimes)^time;
    
    printf("the compoundinterest is %d",compoundinterest);
    return 0;
}
