#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    
    int play_systeme = 0;
    int play_user = 0;
    int point_user = 0;
    int point_systeme = 0;

    const int VALUE_MIN = 1;
    const int VALUE_MAX = 3;   
    const int MAX_POINT = 3;
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;

    srand(time(NULL));   

    do // boucle de jeu 
    {
        do
        {
            printf("What do you want play ?\n 1 >>> Rock \n 1 >>> Paper \n 3 >>> Scissors\n: ");
            scanf("%d", &play_user);

        } while (play_user < VALUE_MIN || play_user > VALUE_MAX);
        
        // generation d'un nombre aleatoire   
         play_systeme = (rand() % VALUE_MAX) + VALUE_MIN;

         //traitement de la manche courante
        printf("Player play : %d and OS play: %d >>>> ",play_user, play_systeme);

        if(play_systeme == play_user) {
            printf("Equal\n");
        } else if(  
                    (play_user == ROCK && play_systeme == SCISSORS) || 
                    (play_user == PAPER && play_systeme == ROCK) || 
                    (play_user == SCISSORS && play_systeme == PAPER) )
            {
                printf("Player_user won 1 point\n");
                point_user++;
        } else {
                printf("Player_systeme won 1 point\n");
                point_systeme++;
        }
        //affichage des points
        printf("Points: Systeme: %d et Player: %d\n\n", point_systeme, point_user);
        
    } while (point_systeme < MAX_POINT && point_user < MAX_POINT);

       //bilan de la partie
    if(point_systeme > point_user) {
        printf("Defeat ...\n");
    } else {
        printf("Victory !\n");
    }
       
}