// program to calculate the area of a rectangle
#include <stdio.h>
int main() {
    int length,width,area;
    printf("enter length: ");
    scanf("%d",&length);
    printf("enter width: ");
    scanf("%d",&width);
    area=length*width;
    printf("the area of the reactangle is:%d",area);
    return 0;
}
