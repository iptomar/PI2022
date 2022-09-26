// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_005 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Número \t: " );
        int num = Integer.valueOf(keyb.nextLine());
        if(num == 0 ){
            System.out.print("Nulo" );
        }else{
            if(num > 0 ){
                System.out.print("Positivo" );
            }else{
                System.out.print("Negativo" );
            }
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
