// while loop to display the cube of the numbers upto a given integer
#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i*i*i);
        i++;
    }

    return 0;
}