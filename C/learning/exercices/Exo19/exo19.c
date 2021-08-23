#include <stdio.h>
#include <math.h>

int main() {

    double number;

    printf("Please enter a number: ");
    scanf("%lf", &number);

    // Floor calculent l'arrondi entier inférieur d'un nombre donné donc,
    // Ici si number est différent de floor(number) donc si il n'est pas un entier alors on print "Ce n'est pas un entier" sinon...
    if(number != floor(number)) {
        printf( "Not Integer: %lf\n",number);

    } else {

        printf( "Is Interger: %lf\n", number);
    }

    return 0;
}