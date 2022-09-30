// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_019 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Angle (rad) \t: " );
        double ang = Double.valueOf(keyb.nextLine());
        System.out.print("Sin \t\t= " + Math.sin( ang ) + "\n" );
        System.out.print("Cosine \t\t= " + Math.cos( ang ) + "\n" );
        System.out.print("Tangent \t= " + Math.tan( ang ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:58
