// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha07_006 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Number of terms : " );
        int n = Integer.valueOf(keyb.nextLine());
        int product = 1 ;
        for( int i = 1; i < n + 1; i = i + 1 ) {
            int f = 2 * i - 1 ;
            product *=f;
        }
        System.out.print("Result = " + product );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
