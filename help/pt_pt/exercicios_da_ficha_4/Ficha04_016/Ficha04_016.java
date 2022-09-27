// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_016 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Nota \t: " );
        int nota = Integer.valueOf(keyb.nextLine());
        if(nota >= 0 && nota <= 20 ){
            System.out.print("Nota válida" );
        }else{
            System.out.print("Nota inválida" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
