#include <stdio.h>
#include <stdlib.h>

int main() {
    int tab[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
          printf("My table: %d\n ", tab[i]);
    }
    printf("\nInverse: ");

    for (int i = 4; i >= 0; i--) {
          printf("My table: %d\n ", tab[i]);
    }
    return 0;
}