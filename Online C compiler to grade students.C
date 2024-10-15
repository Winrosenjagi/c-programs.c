
// Online C compiler to grade students
#include <stdio.h>
int main() {
    int math,english,kiswahili,average;
    printf("enter math :");
    scanf("%d",&math);
    printf("enter english :");
    scanf("%d",&english);
    printf("enter kiswahili :");
    scanf("%d",&kiswahili);
    average=math+english+kiswahili/3;
    if("average>70"){
        printf("A");
    }
    else if("average >60 "){
        printf("B");
    }
    else if("average>50"){
        printf("c");
    }
    else{
        printf("D");
    }
    
    
    return 0;
}
