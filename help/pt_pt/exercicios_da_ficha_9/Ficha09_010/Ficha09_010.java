// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Numero : " );
        int num = Integer.valueOf(keyb.nextLine());
        System.out.print("Digitos = " );
        while(num > 0 ){
            System.out.print(num % 10 + " " );
            num /=10;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
