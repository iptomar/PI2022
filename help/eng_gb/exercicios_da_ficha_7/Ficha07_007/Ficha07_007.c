// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Number of terms : ");
    int n;
    scanf("%d", &n);
    float product = 1 ;
    int i = 0 ;
    for( int i = 1; i < n + 1; i = i + 1 ) {
        float f = pow( i , 1.0 / 3 ) ;
        product *=f;
    }
    printf("Result = %f",product );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
