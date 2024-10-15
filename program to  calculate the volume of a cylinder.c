//  program to  calculate the volume of a cylinder
#include <stdio.h>
int main() {
double radius,length,volume;
double const pi=3.142;
printf("enter radius:");
scanf("%lf",&radius);
printf("enter length:");
scanf("%lf",&length);
volume=pi*radius*radius*length;
printf("the volume of the cylinder is %.2lf",volume);
    
    return 0;
}
