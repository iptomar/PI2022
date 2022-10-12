// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linhaCopa( int sp, int chars, char * txt );
void copa( int alt, char * txt );

//Main Function
int main() {
    printf("Altura   : ");
    int alt;
    scanf("%d", &alt);
    printf("Caractér : ");
    char char[256];
    fgets(char,256, stdin);
    copa(alt , char ) ;
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


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:15
