// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Inferior limit : ");
    int inf;
    scanf("%d", &inf);
    printf("Upper limit : ");
    int sup;
    scanf("%d", &sup);
    while(inf <= sup ){
        if(inf % 2 != 0 ){
            printf("%d ",inf );
        }
        inf++;
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
