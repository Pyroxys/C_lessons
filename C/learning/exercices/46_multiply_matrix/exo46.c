#include <stdio.h>
#include <stdlib.h>

int main() {

    int matriceX[2][3] = {
        {1, 2, 0},
        {4, 3, -1}
    };

    int matriceY[3][2] = {
        {5, 1},
        {2, 3},
        {3, 4}
    };

    for(int lines = 0; lines < 2; lines++) {
        for(int  column = 0; column < 2; column++) {
            int result = 0;
            for(int i = 0; i < 3; i++) {
                result += matriceX[lines][i] * matriceY[i][column];
            }
            printf(" %d ", result);
        }
        putchar('\n');
    }

    return 0;
}