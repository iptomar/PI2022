// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha05_008 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Minimo : " );
        int imin = Integer.valueOf(keyb.nextLine());
        System.out.print("Maximo : " );
        int imax = Integer.valueOf(keyb.nextLine());
        for( int i = imin; i < imax + 1; i = i + 1 ) {
            if(i % 2 == 0 ){
                System.out.print(i + " " );
            }
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03
