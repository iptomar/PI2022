// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Actual number \t: ");
    float r1;
    scanf("%f", &r1);
    printf("Actual number \t: ");
    float r2;
    scanf("%f", &r2);
    printf("Actual Sum \t: ");
    float r3;
    scanf("%f", &r3);
    float sum = r1 + r2 ;
    float distance = abs( sum - r3 ) ;
    float precision = 1.0E-5 ;
    printf("%f + %f \t= %f => ",r1 ,r2 ,r3 );
    if(distance < precision ){
        printf("True");
    }else{
        printf("False");
    }
    printf("\n\n%f + %f \t= %f",r1 ,r2 ,( r1 + r2 ) );
    printf("\nDistance \t: %f",distance );
    printf("\nPrecision \t: %f",precision );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
