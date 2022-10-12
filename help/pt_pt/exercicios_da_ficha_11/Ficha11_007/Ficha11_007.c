// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha( int n );

//Main Function
int main() {
    linha(3 ) ;
    linha(5 ) ;
    linha(7 ) ;
    linha(5 ) ;
    linha(3 ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha( int n ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
