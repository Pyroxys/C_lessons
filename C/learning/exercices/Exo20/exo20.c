#include <stdio.h>
#include <math.h>

int main() {

    double number;

    printf("Please enter a integer number: ");
    scanf("%lf", &number);

    double result = sqrt(number);

    if(result != floor(number) && result == floor(number)) {

        printf( "%lf is a perfect \n",result);

    } else {

        printf( "%lf is not a perfect\n", result);
    }

    return 0;
}