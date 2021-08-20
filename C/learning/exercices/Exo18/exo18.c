#include <stdio.h>

int main() {

    int number;

    printf("Please enter a number : ");
    scanf("%d", &number);

    // Modulo permet d'avoir le reste d'une division euclidienne, ici on prend le nombre entré X que l'on divise par 2,
    // si notre nombre X vaut 4 alors 4/2 = 2 il est paire sinon si X vaut 3 alors 3/2 = 1.5 celui-ci est impaire 
    if(number % 2 == 0) {
        printf("This number : %d is a pair\n", number);
    }
    else {    
        printf("This number : %d is odd \n", number);
    }

    return 0;
}