// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("What is your name \t: ");
    char name[256];
    fgets(name,256, stdin);
    printf("What is your age \t: ");
    int age;
    scanf("%d", &age);
    printf("Hello %s ",name );
    printf(" of %d years",age );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:50
