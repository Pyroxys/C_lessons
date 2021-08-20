#include <stdio.h>

int main() {

    int nb1;
    int nb2;

    float resultP;
    float resultArea;

    printf("Please enter the Heigth and Width of triangle : ");
    scanf("%d%d", &nb1, &nb2);

    resultP = (2 * nb1 + 2 * nb2);

    printf("Perimeter = %.2f\n", resultP);

    resultArea = nb1 * nb2;
    
    printf("Area = %.2f\n", resultArea);

    return 0;
}