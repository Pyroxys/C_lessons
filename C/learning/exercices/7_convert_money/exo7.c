#include <stdio.h>

int main() {

    float moneyEuro;
    float moneyDollar;
    const float RATE_EXCHANGE_DOLLARS = 1.17; 
    const float RATE_EXCHANGE_EURO = 0.86; 

    printf("Enter a number: ");
    scanf("%f", &moneyEuro);

    float resultDollar = moneyEuro * RATE_EXCHANGE_DOLLARS;

    printf("The exchange rate of euro at dollar is: %.2f\n", RATE_EXCHANGE_DOLLARS);
    printf("So you have %.2f dollars \n", resultDollar);

    printf("Enter a number: ");
    scanf("%f", &moneyDollar);

    float resultEuro = moneyDollar *RATE_EXCHANGE_EURO;

    printf("The exchange rate of dollar at euro is: %.2f\n", RATE_EXCHANGE_EURO);
    printf("So you have %.2f euro \n", resultEuro);


    return 0;
}