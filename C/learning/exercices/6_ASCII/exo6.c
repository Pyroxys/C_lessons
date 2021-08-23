#include <stdio.h>

int main() {

    char letter = ' ';

    printf("Enter a letter: ");
    scanf("%c", &letter);

    printf("You have entered the letter ASCII %c, so :\n", letter);
    printf("-%d in decimal\n", (int)letter);
    printf("-%x in hexadecimal\n", (int)letter);
}