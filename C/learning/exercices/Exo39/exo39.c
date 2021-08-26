#include <stdlib.h>
#include <stdio.h>

int main() {

    const int SIZE = 5;
    int tab[SIZE];
   

    printf("Remplir ce tableau de %d entiers\n", SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("Table[%d] = ", i);
        scanf("%d", tab + i);

    }

    int min = tab[0];
    int max = tab[0];
    int somme = tab[0];
    
    for (int i = 1; i < SIZE; i++) {
            if(tab[i] < min ) min = tab[i];
            if(tab[i] > max ) max = tab[i];
            somme += tab[i];
    }

    float avearge = (float)somme / (float)SIZE;

     printf("min=%d, max=%d, somme=%d, avearge=%.2f", min, max, somme, avearge);

    return 0;
}