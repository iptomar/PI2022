// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Somatório\n");
    int soma = 0 ;
    int i = 0 ;
    for( int i = 1; i < 6; i = i + 1 ) {
        printf("%d + %d",soma ,i );
        soma +=i;
        printf(" \t = %d\n",soma );
    }
    printf("\nTotal = %d",soma );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
