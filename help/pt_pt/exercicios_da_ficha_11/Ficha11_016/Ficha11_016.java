// Programador           -

import java.util.Scanner;

public class Ficha11_016 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Altura   : " );
        int alt = Integer.valueOf(keyb.nextLine());
        System.out.print("Caractér : " );
        String char = keyb.nextLine();
        copa(alt , char ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linhaCopa( int sp , int chars , String txt){
        for( int i = 0; i < sp; i = i + 1 ) {
            System.out.print(" " );
        }
        for( int i = 0; i < chars; i = i + 1 ) {
            System.out.print(txt );
        }
        System.out.print("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void copa( int alt , String txt){
        for( int i = 1; i < alt + 1; i = i + 1 ) {
            int sp = alt - i ;
            int chrs1 = i * 2 - 1 ;
            linhaCopa(sp , chrs1 , txt ) ;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:15
