#include <stdio.h>

int main() {

    int number;
    int* p_number = &number;

    printf("Please enter a number:\n");
    scanf("%d", p_number);

    printf("The value is %d and his address is: %p\n", number, p_number);

    return 0;
}