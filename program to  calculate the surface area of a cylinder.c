
//  program to  calculate the surface area of a cylinder
#include <stdio.h>
int main() {
double radius,length,diameter,surfacearea;
double const pi=3.142;
printf("enter radius:");
scanf("%lf",&radius);
printf("enter length:");
scanf("%lf",&length);
printf("enter the diameter:");
scanf("%lf",&diameter);
surfacearea=2*pi*radius*radius+pi*diameter*length;
printf("the surfacearea of the cylinder is %.2lf",surfacearea);
    
    return 0;
}
