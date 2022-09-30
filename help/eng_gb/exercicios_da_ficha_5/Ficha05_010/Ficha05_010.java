// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha05_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        int minimum = 999 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            System.out.print(i + "º grade : " );
            int grade = Integer.valueOf(keyb.nextLine());
            if(grade < minimum ){
                minimum = grade ;
            }
        }
        System.out.print("Nota mínima = " + minimum );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
