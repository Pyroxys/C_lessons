#include <stdio.h>
#include <stdlib.h>

int main() {
    const int VALUE_MIN = 0; 
    const int VALUE_MAX = 9; 
    const int SIZE = 7;

    int table[SIZE];

  srand(time(NULL)); 
  putchar('[');
  // Remplie mon tableau avec nes nombres aléatoire entre 0 - 9
    for(int i = 0; i < SIZE; i++) {
        table[i] = ((rand() % (VALUE_MAX-VALUE_MIN+1)) + VALUE_MIN);
        printf("%d", table[i]);
    }
    printf("]\n");
    // tri par selection
    for (int i = 0; i < SIZE; i++) {
      // i_min = correspond aux total d'entier que j'ai dans mon tableau donc 7 mais on lui retir moins 1 pour savoir la fin du tableau 
      int i_min = i;
      // printf("=>>>>%d\n", i_min);
      // tmp = correspond à chaque entier que j'ai dans mon tableau exemple : =>>>>5 =>>>>7 =>>>>9 =>>>>7 =>>>>7 =>>>>9 =>>>>9
      int tmp = table[i];
      // printf("=>>>>%d", table[i]);

     // Recherche du mini dans la suite du tableau
      for (int j = i + 1; j < SIZE; j++) {
       
          if (table[j] < table[i_min]) {
            i_min = j;

          } 
      }
         //recherche du mini dans la suite du tableau
      if (i != i_min) {
       
         table[i] = table[i_min];
         table[i_min] = tmp;
      }
  }
     //affichage du resultat
    printf("Tri par selection:\n");
    putchar('[');
    for(int i = 0; i < SIZE; i++)
        printf("%d ", table[i]);
    putchar(']');

    return 0;
}