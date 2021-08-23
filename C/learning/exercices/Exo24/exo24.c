#include <stdio.h>

int main() {

    int number = 0;
    int i;

    printf("Enter a number: \n");
    scanf("%d",&number);

    for (i = number; i > 0; i--) {
        printf("\t%d\n", i);
    }
    printf("Finish !\n");
    return 0;
}