// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Número real \t: ");
    float r1;
    scanf("%f", &r1);
    printf("Número real \t: ");
    float r2;
    scanf("%f", &r2);
    printf("Soma real \t: ");
    float r3;
    scanf("%f", &r3);
    float soma = r1 + r2 ;
    float distancia = abs( soma - r3 ) ;
    float precisao = 1.0E-5 ;
    printf("%f + %f \t= %f => ",r1 ,r2 ,r3 );
    if(distancia < precisao ){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }
    printf("\n\n%f + %f \t= %f",r1 ,r2 ,( r1 + r2 ) );
    printf("\nDistância \t: %f",distancia );
    printf("\nPrecisão \t: %f",precisao );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
