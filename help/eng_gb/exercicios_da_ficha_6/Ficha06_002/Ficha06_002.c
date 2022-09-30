// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Height : ");
    int height;
    scanf("%d", &height);
    int i = 0 ;
    for( int i = 0; i < height; i = i + 1 ) {
        int j = 0 ;
        for( int j = 0; j < height; j = j + 1 ) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:55
