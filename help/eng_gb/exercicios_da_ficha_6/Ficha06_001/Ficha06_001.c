// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    int n = 0 ;
    for( int n = 1; n < 11; n = n + 1 ) {
        printf("\nTabuada do %d\n",n );
        int i = 0 ;
        for( int i = 1; i < 11; i = i + 1 ) {
            printf("%d x %d = %d\n",n ,i ,i * n );
        }
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:54
