// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha( int n );

//Main Function
int main() {
    printf("Altura : ");
    int altura;
    scanf("%d", &altura);
    int i = 0 ;
    for( int i = 1; i < altura + 1; i = i + 1 ) {
        linha(i ) ;
    }
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
