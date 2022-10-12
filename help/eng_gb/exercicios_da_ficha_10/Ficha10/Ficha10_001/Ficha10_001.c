// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    int i = 0 ;
    while(1 ){
        printf("Positive number : ");
        scanf("%d", &i);
        if(i > 0 ){
            break;
        }
        printf("Error in reading\n\n");
    }
    printf("Entered value = %d",i );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:32
