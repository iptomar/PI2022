// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha02_018 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Número real    : " );
        double n1 = Double.valueOf(keyb.nextLine());
        System.out.print("Número inteiro : " );
        int n2 = Integer.valueOf(keyb.nextLine());
        double r1 = 0 ;
        double r2 = 0 ;
        double r3 = 0 ;
        double r4 = 0 ;
        r1 = n1 + n2 ;
        r2 = n1 - n2 ;
        r3 = n1 * n2 ;
        r4 = n1 / n2 ;
        System.out.print(n1 + " + " + n2 + " = " + r1 );
        System.out.print("\n" + n1 + " - " + n2 + " = " + r2 );
        System.out.print("\n" + n1 + " * " + n2 + " = " + r3 );
        System.out.print("\n" + n1 + " / " + n2 + " = " + r4 );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:44
