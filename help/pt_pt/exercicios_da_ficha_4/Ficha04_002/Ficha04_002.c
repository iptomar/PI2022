// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Primeiro valor \t: ");
    int n1;
    scanf("%d", &n1);
    printf("Segundo valor \t\t: ");
    int n2;
    scanf("%d", &n2);
    int igual = n1 == n2 ;
    printf("\n%d\t==\t%d\t=\t%d",n1 ,n2 ,igual );
    int diferente = n1 != n2 ;
    printf("\n%d\t!=\t%d\t=\t%d",n1 ,n2 ,diferente );
    int compara = n1 > n2 ;
    printf("\n%d\t>\t%d\t=\t%d",n1 ,n2 ,compara );
    compara = n1 >= n2 ;
    printf("\n%d\t>=\t%d\t=\t%d",n1 ,n2 ,compara );
    printf("\n%d\t<\t%d\t=\t%d",n1 ,n2 ,( n1 < n2 ) );
    printf("\n%d\t<=\t%d\t=\t%d",n1 ,n2 ,( n1 <= n2 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:30
