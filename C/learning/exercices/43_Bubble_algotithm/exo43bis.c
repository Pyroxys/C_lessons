#include <stdlib.h>
#include <stdio.h>

int main() {

    const int VALUE_MIN = 0; 
    const int VALUE_MAX = 9; 
    const int SIZE = 7;
    int finish = 0;
    int table[SIZE];
    
    srand(time(NULL)); 
    putchar('[');
    // Remplie mon tableau avec nes nombres aléatoire entre 0 - 9
    for(int i = 0; i < SIZE; i++) {
        table[i] = ((rand() % (VALUE_MAX-VALUE_MIN+1)) + VALUE_MIN);
        printf("%d", table[i]);
    }
      printf("]\n");
    // Tant que 
     while (!finish)
     {
         finish = 1;

         for(int i = 0; i < SIZE - 1; i++) {
             if (table[i] > table[i+1]) {
                 finish = 0;    

                 int tmp = table[i];
                 table[i] = table[i+1];
                 table[i+1] = tmp;
             }
         }
     }

      //affichage du resultat
    printf("Tri par propagation:\n");
    putchar('[');
    for(int i = 0; i < SIZE; i++)
        printf("%d ", table[i]);
    putchar(']');
     

    return 0;
}