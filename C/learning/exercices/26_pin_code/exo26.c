#include <stdio.h>
#include <math.h>


int main() {

    int pin;
    int try = 3;
    const CODE_PIN = 1234;

   do
   {
       printf("Enter your pin code: \n");
       scanf("%d",&pin);
       if (pin == CODE_PIN) {
        printf("Succes your pin is: %d\n", pin);
    } else {
       printf("you have %d tries \n", --try);
    }

   } while (pin != CODE_PIN && try > 0);
   
    return 0;
}