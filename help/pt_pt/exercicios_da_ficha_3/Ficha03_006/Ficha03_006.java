// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_006 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Teorema de Pitágoras\n" );
        System.out.print("Cateto a \t: " );
        double a = Double.valueOf(keyb.nextLine());
        System.out.print("Cateto b \t: " );
        double b = Double.valueOf(keyb.nextLine());
        double c = Math.pow( Math.pow( a , 2 ) + Math.pow( b , 2 ) , 0.5 ) ;
        System.out.print("Hipotnusa \t: " + c );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
