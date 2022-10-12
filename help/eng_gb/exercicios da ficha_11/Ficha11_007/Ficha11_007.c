// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void line( int n );

//Main Function
int main() {
    line(3 ) ;
    line(5 ) ;
    line(7 ) ;
    line(5 ) ;
    line(3 ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line( int n ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
