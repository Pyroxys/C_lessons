#include <stdio.h>
#include <stdlib.h>

int main() {

    char myChar = 'A';

    printf("Type: char \n");
    printf("Size: %d octets\n", sizeof(myChar));
    printf("Content: %c\n", myChar);
    printf("Adresse: %p\n", &myChar);

    return 0;
}