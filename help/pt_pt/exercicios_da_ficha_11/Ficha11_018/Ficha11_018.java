// Programador           -

import java.util.Scanner;

public class Ficha11_018 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        int alt = 0 ;
        while(true ){
            System.out.print("Altura   : " );
            alt = Integer.valueOf(keyb.nextLine());
            if(alt % 2 == 0 && alt >= 4 ){
                break;
            }
            System.out.print("\tValor errado\n" );
        }
        System.out.print("Caractér : " );
        String txt = keyb.nextLine();
        copa(alt / 2 , txt ) ;
        tronco(alt / 2 , txt ) ;
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
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void tronco( int n , String ch){
        for( int i = 0; i < n; i = i + 1 ) {
            for( int j = 0; j < n - 1; j = j + 1 ) {
                System.out.print(" " );
            }
            System.out.print(ch + "\n" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
