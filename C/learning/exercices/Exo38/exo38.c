#include <stdlib.h>
#include <stdio.h>

int main() {

    char tab[5] = {'A','B','C','D','E'};

    for (int i = 0; i < 5; i++) {
          printf("table[%d] = %c(%p)\n ",i, tab[i], &tab[i]);
    }
    
    return 0;
}