// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha(  );

//Main Function
int main() {
    linha() ;
    printf("Numeros entre 1 e 5\n");
    linha() ;
    int i = 0 ;
    for( int i = 1; i < 6; i = i + 1 ) {
        printf("%d\n",i );
    }
    linha() ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha(  ){
    int i = 0 ;
    for( int i = 0; i < 20; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
