// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    int minimum = 999 ;
    int i = 0 ;
    for( int i = 1; i < 6; i = i + 1 ) {
        printf("%dº grade : ",i );
        int grade;
        scanf("%d", &grade);
        if(grade < minimum ){
            minimum = grade ;
        }
    }
    printf("Nota mínima = %d",minimum );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
