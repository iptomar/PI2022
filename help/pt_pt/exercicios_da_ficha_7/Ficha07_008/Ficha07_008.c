// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("x : ");
    float x;
    scanf("%f", &x);
    printf("g(%f)= ",x );
    if(x < 1 ){
        x = - pow( x , 2 ) + 1 ;
    }else{
        x--;
    }
    printf("%f",x );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:14
