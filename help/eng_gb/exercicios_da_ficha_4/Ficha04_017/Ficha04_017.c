// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Grade \t: ");
    int grade;
    scanf("%d", &grade);
    if(grade < 0 || grade > 20 ){
        printf("Invalid Grade");
    }else{
        printf("Valid Grade");
    }
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:29
