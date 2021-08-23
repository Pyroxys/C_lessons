#include <stdio.h>
#include <math.h>


int main() {

    int numberEnter;

    printf("Enter a angle maximum: \n");
    scanf("%d",&numberEnter);

    for(int i = 0; i <= numberEnter; i++) {
        printf("cos(%d) = %f\n",i, cos(i));

        if (i % 2 == 0) {
        printf("sin(%d) = %f\n",i, sin(i));
        }
    }

    printf("\n");

    return 0;
}