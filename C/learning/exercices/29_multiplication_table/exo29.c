#include <stdio.h>
#include <math.h>


int main() {

    int nb_table = 0;
    int table;
    int i;

    printf("How many tables of multiplication you want ?\n");
    scanf("%d", &nb_table);

    // Pour table égale 0, table est inférieur à nb_table, table++, on affiche le nombre de table que l'utilisateur souhaite
    for (table = 0; table <= nb_table; table++) {
           printf("Display tables %d\n", table);
        for(i =0; i < 10; i++) {

        printf("\t%d x %d = %d\n", table, i, table * i);
    }
    return 0;
}