#include <stdio.h>

int main() {

    // First methode
  char letter;
  const int OFFSET = 'A' - 'a';

  // read user input
  printf( "Please enter an undercase letter: " );
  scanf( "%c", &letter );

  // display the uppercase letter
  printf( "Here is the uppercase letter: %c", ( letter + OFFSET ) );

  return 0;

// Seconde methode


    /*
    char letter[100];
    int i;

    printf("Enter an letter: ");
    scanf("%s", &letter);
    
    // Pour i vaut 0, lettre à l'index i est différent de la fin du caractère de fin '\0', i++ 
    for(i = 0; letter[i] != '\0'; i++) {
    // Si lettre à l'index i est supérieur ou égale à 'a" && que lettre à l'index i est inférieur ou égale à 'z' 
        if(letter[i] >= 'a' && letter[i] <= 'z') {
            // Lettre à l'index i vaut la lettre choisie - 32
            letter[i] = letter[i] - 32;
        }
    }

    printf("In Uppercase is this: %s\n", letter);

    return 0;
    */

  
}


