// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Summation step 2\n");
    int sum = 0 ;
    int i = 0 ;
    for( int i = 1; i < 10; i = i + 2 ) {
        printf("%d + %d",sum ,i );
        sum +=i;
        printf(" \t= %d\n",sum );
    }
    printf("\nSum = %d",sum );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
