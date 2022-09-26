// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Teorema de Pitágoras\n");
    printf("Cateto a \t: ");
    float a;
    scanf("%f", &a);
    printf("Cateto b \t: ");
    float b;
    scanf("%f", &b);
    float c = sqrt( pow( a , 2 ) + pow( b , 2 ) ) ;
    printf("Hipotnusa \t: %f",c );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
