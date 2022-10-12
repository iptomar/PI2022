// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha11_008 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("height : " );
        int Height = Integer.valueOf(keyb.nextLine());
        for( int i = 1; i < Height + 1; i = i + 1 ) {
            line(i ) ;
        }
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void line( int n){
        for( int i = 0; i < n; i = i + 1 ) {
            System.out.print("*" );
        }
        System.out.print("\n" );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
