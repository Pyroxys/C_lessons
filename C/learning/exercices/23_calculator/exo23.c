#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int firstNumber = 0;
    int secondNumber = 0;
    int result = 0;
    char expression = 'x';
    
    printf("Indicate a mathematical operation than i must solve \n");
    printf("The format is [number1 symbol number2] for exemple (2+3)\n");
    printf("Expressions possible is [+, -, *, /]\n");
    scanf("%d%c%d", &firstNumber, &expression, &secondNumber);

    // Empeche la division par 0
    if (expression == '/' && secondNumber == 0) {
        printf("Impossile to divide through 0");
    } else {

        switch (expression) {
            case '+':
                result = firstNumber + secondNumber;
                break;
            case '-':
                result = firstNumber - secondNumber;
                break;
            case '*':
                result = firstNumber * secondNumber;
                break;
            case '/':
                result = firstNumber / secondNumber;
                break;
            default:
                printf("Is not expression");
                break;
        }

        // Vérifie l'opérateur choisi par l'utilisateur 
        if (expression == '+' || expression == '-' || expression == '*' || expression == '/') {
            printf("The result is: %d%c%d = %d.\n",firstNumber , expression, secondNumber, result);
        }
   }

    return 0;
}