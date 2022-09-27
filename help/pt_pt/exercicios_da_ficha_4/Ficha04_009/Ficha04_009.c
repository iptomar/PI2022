// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Verificar se a soma de dois valores reais");
    printf("\né igual a um terceiro\n");
    printf("Real 1 \t: ");
    float r1;
    scanf("%f", &r1);
    printf("Real 2 \t: ");
    float r2;
    scanf("%f", &r2);
    printf("Real 3 \t: ");
    float r3;
    scanf("%f", &r3);
    printf("%f + %f == %f => ",r1 ,r2 ,r3 );
    if(r1 + r2 == r3 ){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
