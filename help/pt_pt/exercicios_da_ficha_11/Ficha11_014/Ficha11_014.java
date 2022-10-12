// Programador           -

import java.util.Scanner;

public class Ficha11_014 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Altura  : " );
        int altura = Integer.valueOf(keyb.nextLine());
        System.out.print("Largura : " );
        int largura = Integer.valueOf(keyb.nextLine());
        caixa(largura , altura ) ;
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
    public static void interior( int n){
        System.out.print("*" );
        for( int i = 1; i < n - 1; i = i + 1 ) {
            System.out.print(" " );
        }
        System.out.print("*\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void caixa( int larg , int alt){
        linha(larg ) ;
        for( int i = 1; i < alt - 1; i = i + 1 ) {
            interior(larg ) ;
        }
        linha(larg ) ;
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
