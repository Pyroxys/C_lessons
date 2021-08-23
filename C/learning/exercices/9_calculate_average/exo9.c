#include <stdio.h>

int main() {

    int nb1;
    int nb2;
    int nb3;
    int resultS;
    float resultTotal;

    printf("Please enter 3 notes: ");
    scanf("%d %d %d", &nb1, &nb2, &nb3 );

    resultS = nb1 + nb2 + nb3;

    printf("Somme = %d\n", resultS);

    resultTotal = resultS / 3;

    printf("Total = %.2f\n", (float)resultTotal);

    
    return 0;
}