// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_002 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Primeiro valor \t: " );
        int n1 = Integer.valueOf(keyb.nextLine());
        System.out.print("Segundo valor \t\t: " );
        int n2 = Integer.valueOf(keyb.nextLine());
        boolean igual = n1 == n2 ;
        System.out.print("\n" + n1 + "\t==\t" + n2 + "\t=\t" + igual );
        boolean diferente = n1 != n2 ;
        System.out.print("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + diferente );
        boolean compara = n1 > n2 ;
        System.out.print("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compara );
        compara = n1 >= n2 ;
        System.out.print("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compara );
        System.out.print("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
        System.out.print("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:30
