// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Decimal : ");
    int num;
    scanf("%d", &num);
    char binary[256]= "" ;
    while(num > 0 ){
        { //binary = num % 2 + binary
            char _tmp[256]="";
            char _val[25];
            sprintf(_val,"%d",num % 2 );
            strcat(_tmp, _val);
            strcat(_tmp,binary );
            strcpy(binary, _tmp);
        };
        num /=2;
    }
    printf("Binary = %s ",binary );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
