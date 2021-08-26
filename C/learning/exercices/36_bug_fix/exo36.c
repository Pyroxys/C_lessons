#include <stdio.h>

int main() {

     int age;    
     int* pointeur_age = &age;    

     printf("Quel est votre age ? \n"); 

     scanf("%d", pointeur_age);  

     printf("Vous avez %d ans\n", age);

    return 0;
}