// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha02_016 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("1º número :" );
        double n1 = Double.valueOf(keyb.nextLine());
        System.out.print("2º número :" );
        double n2 = Double.valueOf(keyb.nextLine());
        System.out.print(n1 + " + " + n2 + " = " + ( n1 + n2 ) );
        System.out.print("\n" + n1 + " - " + n2 + " = " + ( n1 - n2 ) );
        System.out.print("\n" + n1 + " * " + n2 + " = " + ( n1 * n2 ) );
        System.out.print("\n" + n1 + " / " + n2 + " = " + ( n1 / n2 ) );
        System.out.print("\n" + n1 + " ^ " + n2 + " = " + ( Math.pow( n1 , n2 ) ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:44
