// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <stdio.h>
#include <string.h>
#include <math.h>
//Main Function
int main() {
    printf("First value \t: ");
    int n1;
    scanf("%d", &n1);
    printf("Second value \t\t: ");
    int n2;
    scanf("%d", &n2);
    int equal = n1 == n2 ;
    printf("\n%d\t==\t%d\t=\t%d",n1 ,n2 ,equal );
    int different = n1 != n2 ;
    printf("\n%d\t!=\t%d\t=\t%d",n1 ,n2 ,different );
    int compare = n1 > n2 ;
    printf("\n%d\t>\t%d\t=\t%d",n1 ,n2 ,compare );
    compare = n1 >= n2 ;
    printf("\n%d\t>=\t%d\t=\t%d",n1 ,n2 ,compare );
    printf("\n%d\t<\t%d\t=\t%d",n1 ,n2 ,( n1 < n2 ) );
    printf("\n%d\t<=\t%d\t=\t%d",n1 ,n2 ,( n1 <= n2 ) );
    return 0;
}


//C Language c11  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
