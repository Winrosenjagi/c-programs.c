// program to find the simple interest
#include <stdio.h>
int main() {
    int rate,principle_amount,time,simple_interest;
    printf("enter rate :");
    scanf("%d",&rate);
    printf("enter principle_amount :");
    scanf("%d",&principle_amount);
    printf("enter time :");
    scanf("%d",&time);
       simple_interest=(principle_amount*rate*time)/100;
    
    printf("the simple_interest is %d",simple_interest);
    return 0;
}
