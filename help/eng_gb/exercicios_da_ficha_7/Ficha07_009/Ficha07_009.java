// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha07_009 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("x : " );
        int x = Integer.valueOf(keyb.nextLine());
        System.out.print("f(" + x + ")= " );
        if(x % 2 == 0 ){
            x++;
        }
        System.out.print(x );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
