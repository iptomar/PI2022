// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_002 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Value of X\t: " );
        double x = Double.valueOf(keyb.nextLine());
        System.out.print("\nRoot \t\t= " + Math.sqrt( x ) );
        System.out.print("\nPotency \t= " + Math.pow( x , 0.5 ) );
        System.out.print("\nOperator \t= " + Math.pow( x , 0.5 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:55