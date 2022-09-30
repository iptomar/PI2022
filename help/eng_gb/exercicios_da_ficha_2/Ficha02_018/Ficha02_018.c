// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Real number : ");
    float n1;
    scanf("%f", &n1);
    printf("Integer  : ");
    int n2;
    scanf("%d", &n2);
    float r1 = 0 ;
    float r2 = 0 ;
    float r3 = 0 ;
    float r4 = 0 ;
    r1 = n1 + n2 ;
    r2 = n1 - n2 ;
    r3 = n1 * n2 ;
    r4 = n1 / n2 ;
    printf("%f + %d = %f",n1 ,n2 ,r1 );
    printf("\n%f - %d = %f",n1 ,n2 ,r2 );
    printf("\n%f * %d = %f",n1 ,n2 ,r3 );
    printf("\n%f / %d = %f",n1 ,n2 ,r4 );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:53
