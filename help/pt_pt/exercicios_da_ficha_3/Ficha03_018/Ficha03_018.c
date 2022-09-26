// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define length( a ) ( sizeof( a ) / sizeof( a[0] ))
//Main Function
int main() {
    printf("Número positivo\t: ");
    int num;
    scanf("%d", &num);
    printf("Número de dígitos \t= %d",length( num + "" ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:32
