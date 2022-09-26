// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    int minimo = 999 ;
    int i = 0 ;
    for( int i = 1; i < 6; i = i + 1 ) {
        printf("%dº nota : ",i );
        int nota;
        scanf("%d", &nota);
        if(nota < minimo ){
            minimo = nota ;
        }
    }
    printf("Nota mínima = %d",minimo );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:04
