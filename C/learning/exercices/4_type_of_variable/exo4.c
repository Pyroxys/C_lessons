#include <stdio.h>

int main() {

    int number = 10;
    float number2 = 1.1;
    double number3 = 5.5;
    long number4 = 1555;
    short number5 = 3;
    char number6 = 'A';

    printf("Mon int = %d et fait %d octets\n", number, sizeof(number));
    printf("Mon float = %.2f et fait %f octets\n", number2, sizeof(number2));
    printf("Mon double = %.2f et fait %f octets\n", number3, sizeof(number3));
    printf("Mon long = %ld et fait %ld octets \n", number4, sizeof(number4));
    printf("Mon short = %hd et fait %hd octets\n", number5, sizeof(number5));
    printf("Mon char = %c et fait %d octets\n", number6, sizeof(number6));

    return 0;

}