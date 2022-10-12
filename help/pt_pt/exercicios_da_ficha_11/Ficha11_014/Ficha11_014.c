// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha( int n );
void interior( int n );
void caixa( int larg, int alt );

//Main Function
int main() {
    printf("Altura  : ");
    int altura;
    scanf("%d", &altura);
    printf("Largura : ");
    int largura;
    scanf("%d", &largura);
    caixa(largura , altura ) ;
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
void interior( int n ){
    printf("*");
    int i = 0 ;
    for( int i = 1; i < n - 1; i = i + 1 ) {
        printf(" ");
    }
    printf("*\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void caixa( int larg, int alt ){
    linha(larg ) ;
    int i = 0 ;
    for( int i = 1; i < alt - 1; i = i + 1 ) {
        interior(larg ) ;
    }
    linha(larg ) ;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
