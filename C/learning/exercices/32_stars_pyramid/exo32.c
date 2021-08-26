#include <stdlib.h>
#include <stdio.h>
#define MAX_STARS 100

int main() {
    
    int line_stars; // Nombre de lignes d'étoile à afficher
    int center_line;
    char line[MAX_STARS]; // Ligne d'étoiles
    int i;

    printf("Give a number for a line stars: ");
    scanf("%d", &line_stars);
    
      // Initialisation à vide de la ligne
    for (i =0; i < MAX_STARS; i++) {
        line[i] = ' ';
       
    }
    line[MAX_STARS - 1] ='\0';

    center_line = line_stars -1;

    for (i = 0; i < line_stars; i++) {
        line[center_line - i] = '^';
        line[center_line + i] = '^';

         // Affichage de la ligne
        printf("%s\n", line);
        
    }

    return 0;
}