#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
   
     int mystery_number = 0; 
     int number_of_player = 0;   
     int attempt_player = 0; 
     int attempt_player_max = 10;
     int restart_game;
     
     const int VALEUR_MIN = 1;
     const int VALEUR_MAX = 100;   
    
        do {
                // generation d'un nombre aleatoire   
                srand(time(NULL));   
                mystery_number = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;   
                attempt_player = 0;

                printf("Guess the mystery number. Clue: It's number between %d and %d \n", VALEUR_MIN, VALEUR_MAX);
                                        
                do
                {
                        if(attempt_player >= attempt_player_max) {
                                printf("Pity the 10 try are reached\n");
                                break;
                        }

                        printf("Please enter a number for find the right price\n ");
                        scanf("%d", &number_of_player);
                        attempt_player++;

                        if (number_of_player < mystery_number) {
                                printf("It's more ! Try: %d/%d >> %d\n\n",attempt_player, attempt_player_max,number_of_player);
                        } else if (number_of_player > mystery_number) {
                                printf("It is less ! Try: %d/%d >> %d\n\n",attempt_player, attempt_player_max,number_of_player);
                        } else {
                                printf("It's winning the number it was: %d\n", mystery_number);
                        }

                } while (number_of_player != mystery_number);
                        printf("You can retry (1-yes et 2-no) > ");
                scanf("%d", &restart_game);

        }  while (restart_game != 2);
                printf("See you later!");
        return 0;
}
       
   