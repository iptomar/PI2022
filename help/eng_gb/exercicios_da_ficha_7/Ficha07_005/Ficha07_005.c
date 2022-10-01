// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Productory\n");
    int product = 1 ;
    int i = 0 ;
    for( int i = 1; i < 5; i = i + 1 ) {
        printf("%d x %d",product ,i );
        product *=i;
        printf(" = %d\n",product );
    }
    printf("\nTotal = %d",product );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
