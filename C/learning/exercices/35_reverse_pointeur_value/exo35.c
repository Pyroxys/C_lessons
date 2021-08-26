#include <stdio.h>

int main() {

    char firstName = 'A';
    char lastName = 'B';
    
    char* p_firstName = &firstName;
    char* p_lastName = &lastName;

    printf("Your alias is %c.%c\n", firstName, lastName );

    char var3 = *p_firstName;
    *p_firstName = *p_lastName;
    *p_lastName = var3;

    printf("Your alias is %c.%c\n", firstName, lastName );

    return 0;
}