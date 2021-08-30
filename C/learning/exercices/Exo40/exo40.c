#include <stdio.h>
#include <stdlib.h>

int main() {

    const int VALUE_MIN = 'A'; 
    const int VALUE_MAX = 'Z'; 
    const int SIZE = 1000;
    int counter = 0;
    char capture;
    char letter[SIZE]; 
    srand(time(NULL));   

    // remplissage du tableau avec 1000 lettre majuscule choisie aléatoirement 
    for(int i = 0; i < SIZE; i++) {
        letter[i] = (char)((rand() % (VALUE_MAX-VALUE_MIN+1)) + VALUE_MIN);
    }


    //lecture saisie utilisateur
    printf("Indicate a letter to search:");
    scanf("%c", &capture);

    for (int i = 0; i < SIZE; i++) {
        if(letter[i] == capture) {
            counter++;
        }
    }
    // affichage du nombre d'occurence de la lettre entrée par l'utilisateur 
    if(counter) {
        printf("Your letter display %d time\n", counter);
    } else 
        printf("The letter is not present\n");

    return 0;
}
