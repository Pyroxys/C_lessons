#include <stdio.h>

int main() {

    int nb1;
    int nb2;

    printf("Enter two numbers : \n");
    scanf("%d%d", &nb1, &nb2);

    if (nb1 == nb2) {
        printf("Your numbers are equal\n", nb1, nb2);
    } else {
        printf("Your numbers are not equal\n");
    }
    if (nb1 > nb2) {
        printf("\nNb1 (%d) is greater than Nb2 (%d)\n\tDifference: %d", nb1, nb2, nb1 - nb2);
    } else if (nb2 > nb1) {
        printf( "Nb2 (%d) is greater than Nb1 (%d)\n\tDifference: %d", nb2, nb1, nb2 - nb1 );
    } else 
        return -1;
    return 0;
}
    
