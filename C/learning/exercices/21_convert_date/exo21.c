#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int j, m, a;

    printf("Enter the date in the format jj/mm/aaaa: ");
    scanf("%d/%d/%d", &j, &m, &a);

    printf("\t%d ", j);
    switch (m) {
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    default:
        printf("December ");
        break;
    }

    printf("%d\n ", a);

    return 0;
}