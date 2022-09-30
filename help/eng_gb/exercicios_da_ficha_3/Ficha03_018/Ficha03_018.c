// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define length( a ) ( sizeof( a ) / sizeof( a[0] ))
//Main Function
int main() {
    printf("Positive number\t: ");
    int num;
    scanf("%d", &num);
    printf("Number of digits \t= %d",length( num + "" ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:58
