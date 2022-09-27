// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define length( a ) ( sizeof( a ) / sizeof( a[0] ))
//Main Function
int main() {
    printf("Nome : ");
    char nome[256];
    fgets(nome,256, stdin);
    printf("Numero de caracteres = %d",length( nome ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:31
