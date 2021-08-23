#include <stdio.h>

int main() {

    int age;
    int choice;
    printf("What do you want drink ?\n nothing\n coke\n beer\n coffee\n: ");
    scanf("%d", &choice);

    switch(choice)
{
    case 0:
        printf("Nothing ok...");
        break;
    case 1:
        printf("Ok Coke!");
        break;
    case 2:
    printf("how old are you ?");
    scanf("%d", &age);
        if (age >= 18) {
         printf("Beer alrigth !");
        } else {
         printf("Sorry you are to young ");
        }
        break;
    case 3:
        printf("Ok coffee !");
        break;
    default:
        printf("I don't have that, sorry");
        break;
    }
    return 0;
}