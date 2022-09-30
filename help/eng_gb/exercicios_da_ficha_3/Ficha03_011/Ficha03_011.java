// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_011 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("integer number\t: " );
        int n1 = Integer.valueOf(keyb.nextLine());
        System.out.print("real number \t: " );
        double n2 = Double.valueOf(keyb.nextLine());
        System.out.print("Ordered Numbers" );
        System.out.print("\n" + Math.min( n1 , n2 ) );
        System.out.print("\n" + Math.max( n1 , n2 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
