// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Soma da sequência de fibonacci\n ");
    int f0 = 1 ;
    int f1 = 1 ;
    printf("%d %d",f0 ,f1 );
    int soma = 2 ;
    while(f0 + f1 < 100 ){
        int fn = f0 + f1 ;
        soma +=fn;
        printf(" %d",fn );
        f1 = f0 ;
        f0 = fn ;
    }
    printf("\nSoma = %d",soma );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
