// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha( int n, char * c );
void interior( int n, char * cl, char * ci );
void caixa( int larg, int alt, char * cl, char * ci );

//Main Function
int main() {
    printf("Altura   : ");
    int altura;
    scanf("%d", &altura);
    printf("Largura  : ");
    int largura;
    scanf("%d", &largura);
    printf("Limite   : ");
    char limite[256];
    fgets(limite,256, stdin);
    printf("Interior : ");
    char interior[256];
    fgets(interior,256, stdin);
    caixa(largura , altura , limite , interior ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha( int n, char * c ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        printf("%s ",c );
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void interior( int n, char * cl, char * ci ){
    printf("%s ",cl );
    int i = 0 ;
    for( int i = 1; i < n - 1; i = i + 1 ) {
        printf("%s ",ci );
    }
    printf("%s \n",cl );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void caixa( int larg, int alt, char * cl, char * ci ){
    linha(larg , cl ) ;
    int i = 0 ;
    for( int i = 1; i < alt - 1; i = i + 1 ) {
        interior(larg , cl , ci ) ;
    }
    linha(larg , cl ) ;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
