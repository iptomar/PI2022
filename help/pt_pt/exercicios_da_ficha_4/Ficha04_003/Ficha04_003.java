// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_003 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Nota\t: " );
        int nota = Integer.valueOf(keyb.nextLine());
        if(nota >= 10 ){
            System.out.print("Aprovado" );
        }else{
            System.out.print("Reprovado" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
