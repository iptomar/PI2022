// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Nota \t: ");
    int nota;
    scanf("%d", &nota);
    if(nota < 0 || nota > 20 ){
        printf("Nota inválida");
    }else{
        printf("Nota válida");
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
