#include <stdio.h>

int main() {

    int nb1;
    int nb2;
    int nb3;

    float resultS;
    float resultTotal;

    printf("Please enter 3 notes : ");
    scanf("%d%d%d", &nb1, &nb2, &nb3 );

    resultS = nb1 + nb2 + nb3;

    printf("Somme = %.2f\n", resultS);

    resultTotal = resultS / 3;

    printf("Total = %.2f\n", resultTotal);

    
    return 0;
}