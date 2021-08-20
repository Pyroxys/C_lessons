#include <stdio.h>

int main() {

    int nb1;
    int nb2;
    int difference;

    printf("Enter two numbers : \n");
    scanf("%d%d", &nb1, &nb2);

    if (nb1 == nb2 && nb2 == nb1) {
        printf("You numbers is egale\n", nb1, nb2);
    } else {
        printf("Your numbers are not egals\n");
    }
    if (nb1 > nb2 || nb1 < nb2 ) {

        difference = nb1 - nb2;

        printf("The diffenrence between your numbers is : %d", difference);
    }

    return 0;
}