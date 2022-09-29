// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha08_004 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        int n = 0 ;
        do{
            System.out.print("n : " );
            n = Integer.valueOf(keyb.nextLine());
        }while(n <= 0 );
        System.out.print("Valor de n = " + n );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:16
