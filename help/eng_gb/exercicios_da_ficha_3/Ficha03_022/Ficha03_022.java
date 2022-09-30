// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_022 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Angle \t\t\t: " );
        double ang = Double.valueOf(keyb.nextLine());
        System.out.print("Hyperbolic sine \t= " + Math.sinh( ang ) + "\n" );
        System.out.print("Hyperbolic Cosine \t= " + Math.cosh( ang ) + "\n" );
        System.out.print("Hyperbolic tangent \t= " + Math.tanh( ang ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:59
