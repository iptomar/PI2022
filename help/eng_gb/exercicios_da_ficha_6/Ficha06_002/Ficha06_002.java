// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha06_002 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Height : " );
        int height = Integer.valueOf(keyb.nextLine());
        for( int i = 0; i < height; i = i + 1 ) {
            for( int j = 0; j < height; j = j + 1 ) {
                System.out.print("*" );
            }
            System.out.print("\n" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:55
