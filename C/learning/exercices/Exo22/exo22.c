#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char letter;

    printf("Give a letter of the ASCII table: ");
    scanf("%c", &letter);

    if (letter >= 65 && letter < 91) {
        printf("%c is a uppercase\n", letter);
    } else {
        printf("%c is a lowercase\n", letter);
    }


    return 0;
}