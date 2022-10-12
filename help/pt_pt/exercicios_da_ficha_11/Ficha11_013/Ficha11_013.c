// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linhaC( int n, char * c );
void trianguloC( int altura, char * c );

//Main Function
int main() {
    printf("Altura : ");
    int altura;
    scanf("%d", &altura);
    printf("Caractér : ");
    char c[256];
    fgets(c,256, stdin);
    trianguloC(altura , c ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linhaC( int n, char * c ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        printf("%s ",c );
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void trianguloC( int altura, char * c ){
    int i = 0 ;
    for( int i = 0; i < altura; i = i + 1 ) {
        linhaC(altura - i , c ) ;
    }
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
