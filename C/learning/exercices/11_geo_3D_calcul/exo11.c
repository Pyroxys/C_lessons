#include <stdio.h>
#include <math.h>

int main() {

    int radius;
    int hVolume;
    int cone;
    
    float powerful;
    float resultDiameter;
    float resultCircumference;
    float resultArea;
    float resultCylinder;
    float resultConeVolume;

    // Début des calcules du cercle     

    printf("Please enter the radius : ");
    scanf("%d", &radius);

    resultDiameter = (radius * 2);

    printf("Diameter = %.0f\n", resultDiameter);

    resultCircumference = 2 * M_PI * radius;
    
    printf("Circumference = %.5f\n", resultCircumference);

    powerful = radius * radius;

    resultArea = M_PI * powerful;
    
    printf("Area = %.5f\n", resultArea);

    // Fin des calcules du cercle 

    // Début des calcules du cyindre  

    printf("Please enter the heigth of volume : ");
    scanf("%d", &hVolume);

    resultCylinder = M_PI * (powerful * hVolume);

    printf("This cylinder have for volume  = %.5f\n", resultCylinder);

    // Fin des calcules du cyindre 

    // Début des calcules d'un cône  

    printf("Please enter the volume of cone : ");
    scanf("%d", &cone);

    resultConeVolume = M_PI * (powerful * hVolume) / 3;

    printf("This cône have for volume  = %.5f\n", resultConeVolume);

    // Fin des calcules d'un cône 

    return 0;
}


//1 - Diamètre du cercle D = R * 2  
//2 - Circonférence du cercle C = 2 * PI * R
//3-  Aire du cercle A = PI * R²: 

// A.1 - Utilisez deux fonctions scanf avec un %d ou une fonction scanf avec deux %d 
// A.2 - Volume d'un cylindre V = PI * R² * H 
// B - Volume du cône V = PI × R² × h ÷ 3Aide