// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_001 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Base \t\t: " );
        double base = Double.valueOf(keyb.nextLine());
        System.out.print("Expoente \t: " );
        double expo = Double.valueOf(keyb.nextLine());
        System.out.print("\nPotência \t= " + Math.pow( base , expo ) );
        System.out.print("\nOperador \t= " + Math.pow( base , expo ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:28
