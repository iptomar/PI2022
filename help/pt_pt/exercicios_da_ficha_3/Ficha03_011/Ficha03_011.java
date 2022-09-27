// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_011 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Número inteiro\t: " );
        int n1 = Integer.valueOf(keyb.nextLine());
        System.out.print("Número real \t: " );
        double n2 = Double.valueOf(keyb.nextLine());
        System.out.print("Números Ordenados" );
        System.out.print("\n" + Math.min( n1 , n2 ) );
        System.out.print("\n" + Math.max( n1 , n2 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
