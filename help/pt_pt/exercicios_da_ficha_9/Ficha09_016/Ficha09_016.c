// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Numero : ");
    int num;
    scanf("%d", &num);
    int i = 1 ;
    printf("Divisores : ");
    while(i < num ){
        if(num % i == 0 ){
            printf("%d ",i );
        }
        i++;
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:27
