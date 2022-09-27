// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha07_007 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Número de termos : " );
        int n = Integer.valueOf(keyb.nextLine());
        double produto = 1 ;
        for( int i = 1; i < n + 1; i = i + 1 ) {
            double f = Math.pow( i , 1.0 / 3 ) ;
            produto *=f;
        }
        System.out.print("Resultado = " + produto );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
