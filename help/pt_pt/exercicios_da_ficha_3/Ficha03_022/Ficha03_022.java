// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_022 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Ângulo \t\t\t: " );
        double ang = Double.valueOf(keyb.nextLine());
        System.out.print("Seno hiperbólico \t= " + Math.sinh( ang ) + "\n" );
        System.out.print("Coseno hiperbólico \t= " + Math.cosh( ang ) + "\n" );
        System.out.print("Tangente hiperbólica \t= " + Math.tanh( ang ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:33
