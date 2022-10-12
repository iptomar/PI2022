// Programador           -

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void linha3(  );
void linha5(  );
void linha7(  );

//Main Function
int main() {
    linha3() ;
    linha5() ;
    linha7() ;
    linha5() ;
    linha3() ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha3(  ){
    int i = 0 ;
    for( int i = 0; i < 3; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha5(  ){
    int i = 0 ;
    for( int i = 0; i < 5; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void linha7(  ){
    int i = 0 ;
    for( int i = 0; i < 7; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
