// Programador           -

import java.util.Scanner;

public class Ficha11_012 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Altura : " );
        int altura = Integer.valueOf(keyb.nextLine());
        System.out.print("Caractér : " );
        String c = keyb.nextLine();
        trianguloC(altura , c ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linhaC( int n , String c){
        for( int i = 0; i < n; i = i + 1 ) {
            System.out.print(c );
        }
        System.out.print("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void trianguloC( int altura , String c){
        for( int i = 1; i < altura + 1; i = i + 1 ) {
            linhaC(i , c ) ;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:12
