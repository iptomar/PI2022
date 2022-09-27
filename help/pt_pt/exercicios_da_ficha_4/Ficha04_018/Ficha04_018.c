// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("\n4 + 2 * 3 ^ 2 - 1\t= ");
    printf("%d",4 + 2 * (int)( pow( 3 , 2 ) ) - 1 );
    printf("\n2 + 3 > 2 ^ 2  \t= ");
    printf("%d",2 + 3 > (int)( pow( 2 , 2 ) ) );
    printf("\n2 < 3 && 4 >= 2 \t= %d",( 2 < 3 && 4 >= 2 ) );
    printf("\n2 > 3 || !(4 == 2) \t= %d",( 2 > 3 || ! ( 4 == 2 ) ) );
    int var = 1 && ! 0 || 2 > 3 ;
    printf("\n_T && ! _F || 2 > 3 \t= %d",var );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
