// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
#define max(x, y) (((x) > (y)) ? (x) : (y))
//Main Function
int main() {
    printf("integer number\t: ");
    int n1;
    scanf("%d", &n1);
    printf("real number \t: ");
    float n2;
    scanf("%f", &n2);
    printf("Ordered Numbers");
    printf("\n%f",min( n1 , n2 ) );
    printf("\n%f",max( n1 , n2 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
