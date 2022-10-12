// Programador           -

import java.util.Scanner;

public class Ficha11_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Altura : " );
        int altura = Integer.valueOf(keyb.nextLine());
        quadrado(altura ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( int n){
        for( int i = 0; i < n; i = i + 1 ) {
            System.out.print("*" );
        }
        System.out.print("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void quadrado( int altura){
        for( int i = 1; i < altura + 1; i = i + 1 ) {
            linha(altura ) ;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:11
