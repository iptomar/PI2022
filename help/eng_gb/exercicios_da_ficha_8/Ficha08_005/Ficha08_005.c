// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    float height = 0.0 ;
    do{
        printf("Height : ");
        scanf("%f", &height);
    }while(height < 0.2 || height > 3.0 );
    printf("Height = %f",height );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 23:15
