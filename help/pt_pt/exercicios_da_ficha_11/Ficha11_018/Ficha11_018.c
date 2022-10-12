// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linhaCopa( int sp, int chars, char * txt );
void copa( int alt, char * txt );
void tronco( int n, char * ch );

//Main Function
int main() {
    int alt = 0 ;
    while(1 ){
        printf("Altura   : ");
        scanf("%d", &alt);
        if(alt % 2 == 0 && alt >= 4 ){
            break;
        }
        printf("\tValor errado\n");
    }
    printf("Caractér : ");
    char txt[256];
    fgets(txt,256, stdin);
    copa(alt / 2 , txt ) ;
    tronco(alt / 2 , txt ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linhaCopa( int sp, int chars, char * txt ){
    int i = 0 ;
    for( int i = 0; i < sp; i = i + 1 ) {
        printf(" ");
    }
    int i = 0 ;
    for( int i = 0; i < chars; i = i + 1 ) {
        printf("%s ",txt );
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void copa( int alt, char * txt ){
    int i = 0 ;
    for( int i = 1; i < alt + 1; i = i + 1 ) {
        int sp = alt - i ;
        int chrs1 = i * 2 - 1 ;
        linhaCopa(sp , chrs1 , txt ) ;
    }
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void tronco( int n, char * ch ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        int j = 0 ;
        for( int j = 0; j < n - 1; j = j + 1 ) {
            printf(" ");
        }
        printf("%s \n",ch );
    }
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
