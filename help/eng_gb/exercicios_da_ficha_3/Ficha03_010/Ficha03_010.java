// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Value of X\t\t: " );
        double x = Double.valueOf(keyb.nextLine());
        double logX = Math.log10( x ) ;
        System.out.print("Log10(X) \t\t= " + logX );
        double pow10 = Math.pow( 10 , logX ) ;
        System.out.print("\nPow10(Log10(X)) \t= " + pow10 );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
