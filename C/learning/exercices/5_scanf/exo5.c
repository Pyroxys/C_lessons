#include <stdio.h>

int main() {

    int age;
    float size;
    char alias[2];

    printf("What your age and your size in meters : ");
    scanf("%d %f", &age, &size);

    fflush(stdin); //vide le buffer de lecture

    printf("What are your initials : ");
    scanf("%s", &alias);

    printf("You have %d years old and you size is %.2f m\n", age, size);
    printf("You initials is : %s\n", alias);

    return 0;

}


