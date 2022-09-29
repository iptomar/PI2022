// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    float altura = 0.0 ;
    do{
        printf("Altura : ");
        scanf("%f", &altura);
    }while(altura < 0.2 || altura > 3.0 );
    printf("Altura = %f",altura );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:17
