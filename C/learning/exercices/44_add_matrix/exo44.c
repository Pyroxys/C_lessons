#include <stdlib.h>
#include <stdio.h>

int main() {

   int size = 10;
   int matrix[size][size];
   int value1, value2;


  printf("Enter the number of line\n ");
  scanf("%d", &value1);

  printf("Enter the number of column\n ");
  scanf("%d", &value2);

  // Boucle for qui correspond aux lignes 
  for (int i = 0; i < value1; i++) {
       // Boucle for qui correspond aux colonnes 
    for (int j = 0; j < value2; j++) {
         printf("Index by row and column[%d][%d]: ", i, j);
         scanf("%d", &matrix[i][j]);
    }
  }
  printf("<--- Matrix 1 ---> \n");
   // Boucle for qui correspond aux lignes, permet l'affichage de ces dernièrres 
   for (int i = 0; i < value1; i++) {
        // s for qui correspond aux colonnes, permet l'affichage de ces dernièrres 
    for (int j = 0; j < value2; j++) {
         printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }

 printf("<--- MatrixV2 ---> \n");
 // Matrice sans avoir à rentrer les iformations : 

   int sizeV2 = 4;
   int matrixV2[sizeV2][sizeV2];
   int value3, value4;
     
   // Boucle for qui correspond aux lignes   
   for(int h = 0; h < sizeV2; h++) {
        // Boucle for qui correspond aux colonnes 
        for(int g = 0; g < sizeV2; g++) {
             if(g == h) {
                  matrixV2[h][g] = 1;
             } else {
                  matrixV2[h][g] = 0;
             }
        }
   }

    for(int h = 0; h < sizeV2; h++) {
        // Boucle for qui correspond aux colonnes 
        for(int g = 0; g < sizeV2; g++) {
              printf("%d ",matrixV2[h][g]);
        }
        printf("\n");
   }

  return 0;
}