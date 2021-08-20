#include <stdio.h>

int main() {

    long number;

    printf(" Enter number: \n");
    scanf("%ld ", &number);

    // Affichage du gain
    printf("\tMoney : ");

    if(number >= 1000000 ) 
    { 
        printf("%3ld ", number/1000000);
         number %= 1000000;
    }

    if (number >= 1000) 
    {
        printf("%3ld ", number/1000);
        number %= 1000;
    }
    printf("%3ld money :", number);

    return 0;
}