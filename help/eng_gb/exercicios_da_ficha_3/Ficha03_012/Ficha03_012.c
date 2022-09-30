// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
#define max(x, y) (((x) > (y)) ? (x) : (y))
//Main Function
int main() {
    printf("Nome : ");
    char nome1[256];
    fgets(nome1,256, stdin);
    printf("Nome : ");
    char nome2[256];
    fgets(nome2,256, stdin);
    printf("Nomes Ordenados");
    printf("\n%s ",min( nome1 , nome2 ) );
    printf("\n%s ",max( nome1 , nome2 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
