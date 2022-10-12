// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void line(  );

//Main Function
int main() {
    line() ;
    printf("Numbers between 1 and 5\n");
    line() ;
    int i = 0 ;
    for( int i = 1; i < 6; i = i + 1 ) {
        printf("%d\n",i );
    }
    line() ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line(  ){
    int i = 0 ;
    for( int i = 0; i < 20; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
