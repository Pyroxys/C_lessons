#include <stdio.h>
#include <math.h>


int main() {

    int get_nbr_length( int number );
    void separate( int number, int length );
    int number;
    int length;

    // get the user input number
    printf( "Enter a number: " );
    scanf( "%d", &number );

    // get how many digits the input number has
    length = ( number == 0 ) ? 1  : ( log10( number ) + 1 );

    // print the number with spaces every three digits
    separate( number, length );

    return 0;
}
    void separate( int number, int length ) {
        int divisor;

        for ( int i = length - 1; i >= 0; i-- ){   
        divisor = ( int ) pow( 10, i );
        printf( "%d", number / divisor );
        if ( i % 3 == 0 )
            printf( " " );
        number = number % divisor;
        }
    }


  /*
    long number;

    printf(" Enter number: \n");
    scanf("%ld ", &number);

    // Affichage du gain
    printf("\tMoney : ");

    if(number >= 1000000 ) 
    { 
        printf("%3ld ", number/1000000);
         number %= 1000000;
    }

    if (number >= 1000) 
    {
        printf("%3ld ", number/1000);
        number %= 1000;
    }
    printf("%3ld money :", number);

    return 0;
    */
