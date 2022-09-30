// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_012 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Nome : " );
        String nome1 = keyb.nextLine();
        System.out.print("Nome : " );
        String nome2 = keyb.nextLine();
        System.out.print("Nomes Ordenados" );
        System.out.print("\n" + Math.min( nome1 , nome2 ) );
        System.out.print("\n" + Math.max( nome1 , nome2 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
