#include <stdio.h>
#include <math.h>


int main() {

    int findDivider = 0;
    int i;
    int numberEnter;

    printf("Enter a number\n");
    scanf("%d", &numberEnter);
    // Pour I est égale à 0, i inférieur à notre nombre entré, on ajoute 1
   for(i = 1; i <= numberEnter; i++) {
       // Si mon nombre entré modulo de i a 0 en reste alors...
        if (numberEnter % i == 0)
          //printf(" prime number entered = %d and this is i = (%d)\n",numberEnter, i);
        {
            // j'incrémente de 1 pour continuer à chercher des diviseurs de mon nombre entré 
            findDivider++;
        }
           // printf(" = (%d divider find : )\n", findDivider);
    }
    // Si ma variable findDivider est à 2 alors mon nombre entré est premier sinon il ne l'est pas 
    if (findDivider == 2) {
        printf("%d is a prime number\n", numberEnter);
    } else {
        printf("%d is not prime number\n", numberEnter);
    }

    return 0;
}