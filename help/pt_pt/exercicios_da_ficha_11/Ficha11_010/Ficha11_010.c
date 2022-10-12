// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha( int n );
void quadrado( int altura );

//Main Function
int main() {
    printf("Altura : ");
    int altura;
    scanf("%d", &altura);
    quadrado(altura ) ;
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
//::::::::::::::::::::::::::::::::::::::::::::::::::
void quadrado( int altura ){
    int i = 0 ;
    for( int i = 1; i < altura + 1; i = i + 1 ) {
        linha(altura ) ;
    }
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:11
