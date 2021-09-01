#include <stdio.h>
#include <stdlib.h>

int main() {

    const char COLORS[] = {'R', 'V', 'B', 'J', 'O'};
    const int TRY_MAX = 3;
    const int NUMBER_COLORS = 5;
    const int SIZE_CODE = 4;
    char code_secret[] = {'V', 'R', 'B', 'J', 'O'};;
    char saisie_utilisateur[SIZE_CODE];
    int nbTry;

    //generation du code secret
    srand(time(NULL));

    for (nbTry = 1; nbTry <= TRY_MAX; nbTry++) {
        printf("Give a code of 4 colors among {'R', 'V', 'B', 'J', 'O'}:\n");
        fflush(stdin);
        scanf("%c%c%c%c", saisie_utilisateur, (saisie_utilisateur+1),(saisie_utilisateur+2), (saisie_utilisateur+3));


    }
    printf("%c%c%c%c\n", saisie_utilisateur);

    return 0;
}