#include <stdio.h>
#include <stdlib.h>

int main() {

    const int VALUE_MIN = 'A'; 
    const int VALUE_MAX = 'Z'; 
    const int SIZE = 1000;
    const int SIZE_ALPHABET = 26;

    char letter[SIZE];
    int alphabet[SIZE_ALPHABET];

 

    for(int i = 0; i < SIZE_ALPHABET; i++) {
        alphabet[i] = 0;
    }

     // remplissage du tableau avec 1000 lettre majuscule choisie aléatoirement 
    srand(time(NULL)); 
    for(int i = 0; i < SIZE; i++) {
        letter[i] = (char)((rand() % (VALUE_MAX-VALUE_MIN+1)) + VALUE_MIN);
    }
       
    for(int i = 0; i < SIZE; i++) {
        if(letter[i] >= 'A' && letter[i] <= 'Z') {
            int index = letter[i] - VALUE_MIN;
            alphabet[index]++;
        }
    }

        // Affichage du resultat
    printf("Nombre d'occurences: \n");
    for(int i = 0; i < SIZE_ALPHABET; i++)
        printf("\t%c: %d\n", i + VALUE_MIN, table_counter[i]);

    return 0;
}

