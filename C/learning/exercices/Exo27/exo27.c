#include <stdio.h>
#include <math.h>


int main() {

    printf("Table ASCII\n\n");
    printf("HEX\tDEC\tCHAR\n");

   for(int i = 32; i<= 126; i++) {
       printf("0x%x\t%d\t%c\n", i,i,i);
   }
    return 0;
}