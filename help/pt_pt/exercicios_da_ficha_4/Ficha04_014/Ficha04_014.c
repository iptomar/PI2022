// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Tabela de verdade do OU\n");
    int var = 1 || 1 ;
    printf("\n%d\t||\t%d\t= %d",1 ,1 ,var );
    var = 1 || 0 ;
    printf("\n%d\t||\t%d\t\t= %d",1 ,0 ,var );
    var = 0 || 1 ;
    printf("\n%d\t\t||\t%d\t= %d",0 ,1 ,var );
    printf("\n%d\t\t||\t%d\t\t= %d",0 ,0 ,( 0 || 0 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
