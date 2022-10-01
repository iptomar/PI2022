// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Fibonaci sequence sum\n ");
    int f0 = 1 ;
    int f1 = 1 ;
    printf("%d %d",f0 ,f1 );
    int sum = 2 ;
    while(f0 + f1 < 100 ){
        int fn = f0 + f1 ;
        sum +=fn;
        printf(" %d",fn );
        f1 = f0 ;
        f0 = fn ;
    }
    printf("\nSum = %d",sum );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
