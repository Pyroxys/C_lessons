#include <stdio.h>

int main() {

    int age;
    float size;
    char alias[2];

    printf("How are old you and how tall are you in meters: ");
    scanf("%d %f", &age, &size);

    fflush(stdin); //vide le buffer de lecture

    printf("What are your initials: ");
    scanf("%s", &alias);

    printf("You are %d years old and you size is %.2f m\n", age, size);
    printf("You initials is: %s\n", alias);

    return 0;

}


