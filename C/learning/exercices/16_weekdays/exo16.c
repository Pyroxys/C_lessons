#include <stdio.h>

int main() {

    int days;

    printf("Enter a number for the days of the week: ");
    scanf("%d", &days);

    switch(days)
{
    case 1:
        printf("Is Monday !");
        break;
    case 2:
        printf("Is Tuesday !");
        break;
    case 3:
        printf("Is Wednesday !");
        break;
    case 4:
        printf("Is Thursday !");
        break;
    case 5:
        printf("Is friday !");
        break;
    case 6:
        printf("Is Saturday !");
        break;
    case 7:
        printf("Is Sunday !");
        break;
    default:
        printf("holidays !");
        break;
    }
    printf("\n");

    return 0;
}