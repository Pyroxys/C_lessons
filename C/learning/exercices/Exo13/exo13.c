#include <stdio.h>

int main() {

    int age;

    printf(" Enter your age please : \n");
    scanf("%d", &age);

    if(age >= 18 ) {
        printf("Your are major\n");
    } else {
        printf("Your are not major");
    }

    return 0;
}