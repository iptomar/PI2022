// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Pythagorean Theorem\n");
    printf("Catet a \t: ");
    float a;
    scanf("%f", &a);
    printf("Catet b \t: ");
    float b;
    scanf("%f", &b);
    float c = pow( a * a + b * b , 0.5 ) ;
    printf("Hypotnusa \t: %f",c );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:55