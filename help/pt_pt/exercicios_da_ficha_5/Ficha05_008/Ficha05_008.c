// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Minimo : ");
    int imin;
    scanf("%d", &imin);
    printf("Maximo : ");
    int imax;
    scanf("%d", &imax);
    int i = 0 ;
    for( int i = imin; i < imax + 1; i = i + 1 ) {
        if(i % 2 == 0 ){
            printf("%d ",i );
        }
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03