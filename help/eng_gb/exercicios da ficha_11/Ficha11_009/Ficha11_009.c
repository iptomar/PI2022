// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//User Defined Functions
void line( int n );
void triangle( int height );

//Main Function
int main() {
    printf("Height : ");
    int height;
    scanf("%d", &height);
    triangle(height ) ;
    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
void line( int n ){
    int i = 0 ;
    for( int i = 0; i < n; i = i + 1 ) {
        printf("*");
    }
    printf("\n");
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
void triangle( int height ){
    int i = 0 ;
    for( int i = 1; i < height + 1; i = i + 1 ) {
        line(i ) ;
    }
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:23
