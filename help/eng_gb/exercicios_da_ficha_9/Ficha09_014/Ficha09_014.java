// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_014 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Decimal : " );
        int num = Integer.valueOf(keyb.nextLine());
        String binary = "" ;
        while(num > 0 ){
            binary = num % 2 + binary ;
            num /=2;
        }
        System.out.print("Binary = " + binary );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
