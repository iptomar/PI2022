// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Value of X\t\t: ");
    float x;
    scanf("%f", &x);
    float logX = log10( x ) ;
    printf("Log10(X) \t\t= %f",logX );
    float pow10 = pow( 10 , logX ) ;
    printf("\nPow10(Log10(X)) \t= %f",pow10 );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
