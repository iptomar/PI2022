// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("Decimal : ");
    int num;
    scanf("%d", &num);
    char binario[256]= "" ;
    while(num > 0 ){
        { //binario = num % 2 + binario
            char _tmp[256]="";
            char _val[25];
            sprintf(_val,"%d",num % 2 );
            strcat(_tmp, _val);
            strcat(_tmp,binario );
            strcpy(binario, _tmp);
        };
        num /=2;
    }
    printf("Binario = %s ",binario );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:26
