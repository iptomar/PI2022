// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_006 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Pythagorean Theorem\n" );
        System.out.print("Catet a \t: " );
        double a = Double.valueOf(keyb.nextLine());
        System.out.print("Catet b \t: " );
        double b = Double.valueOf(keyb.nextLine());
        double c = Math.pow( Math.pow( a , 2 ) + Math.pow( b , 2 ) , 0.5 ) ;
        System.out.print("Hypotnusa \t: " + c );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
