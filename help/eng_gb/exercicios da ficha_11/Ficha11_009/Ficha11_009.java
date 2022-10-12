// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha11_009 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Height : " );
        int height = Integer.valueOf(keyb.nextLine());
        triangle(height ) ;
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
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void triangle( int height){
        for( int i = 1; i < height + 1; i = i + 1 ) {
            line(i ) ;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:23
