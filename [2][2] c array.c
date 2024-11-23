// c arrays
#include <stdio.h>

int main() {
    int i, j;
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}
