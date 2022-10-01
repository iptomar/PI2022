// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Number : ");
    int num;
    scanf("%d", &num);
    printf("Digits = ");
    while(num > 0 ){
        printf("%d ",num % 10 );
        num /=10;
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
