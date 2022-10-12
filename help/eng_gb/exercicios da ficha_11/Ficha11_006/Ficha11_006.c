// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void line3(  );
void line5(  );
void line7(  );

//Main Function
int main() {
    line3() ;
    line5() ;
    line7() ;
    line5() ;
    line3() ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line3(  ){
    int i = 0 ;
    for( int i = 0; i < 3; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line5(  ){
    int i = 0 ;
    for( int i = 0; i < 5; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line7(  ){
    int i = 0 ;
    for( int i = 0; i < 7; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
