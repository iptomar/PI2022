// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
#define max(x, y) (((x) > (y)) ? (x) : (y))
//Main Function
int main() {
    printf("Número inteiro\t: ");
    int n1;
    scanf("%d", &n1);
    printf("Número real \t: ");
    float n2;
    scanf("%f", &n2);
    printf("Números Ordenados");
    printf("\n%f",min( n1 , n2 ) );
    printf("\n%f",max( n1 , n2 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
