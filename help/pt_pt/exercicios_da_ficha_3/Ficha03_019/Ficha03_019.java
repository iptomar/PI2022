// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_019 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Ângulo (rad) \t: " );
        double ang = Double.valueOf(keyb.nextLine());
        System.out.print("Seno \t\t= " + Math.sin( ang ) + "\n" );
        System.out.print("Coseno \t\t= " + Math.cos( ang ) + "\n" );
        System.out.print("Tangente \t= " + Math.tan( ang ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:32
