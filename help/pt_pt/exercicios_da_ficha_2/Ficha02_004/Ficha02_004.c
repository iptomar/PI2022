// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Qual o seu nome \t: ");
    char nome[256];
    fgets(nome,256, stdin);
    printf("Qual a sua idade \t: ");
    int idade;
    scanf("%d", &idade);
    printf("Olá %s  de %d anos",nome ,idade );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 07 16:09
