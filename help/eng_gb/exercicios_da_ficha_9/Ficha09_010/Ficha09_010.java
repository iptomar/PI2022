// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Number : " );
        int num = Integer.valueOf(keyb.nextLine());
        System.out.print("Digits = " );
        while(num > 0 ){
            System.out.print(num % 10 + " " );
            num /=10;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12