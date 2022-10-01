// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_016 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Numero : " );
        int num = Integer.valueOf(keyb.nextLine());
        int i = 1 ;
        System.out.print("Divisors : " );
        while(i < num ){
            if(num % i == 0 ){
                System.out.print(i + " " );
            }
            i++;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:13
