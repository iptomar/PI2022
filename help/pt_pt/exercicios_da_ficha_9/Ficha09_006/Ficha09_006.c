// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Limite inferior : ");
    int inf;
    scanf("%d", &inf);
    if(inf % 2 == 0 ){
        inf++;
    }
    printf("Limite superior : ");
    int sup;
    scanf("%d", &sup);
    while(inf <= sup ){
        printf("%d ",inf );
        inf +=2;
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
