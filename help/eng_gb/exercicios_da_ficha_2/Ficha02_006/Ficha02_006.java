// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha02_006 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("What is your name \t: " );
        String name = keyb.nextLine();
        System.out.print("What is your age \t: " );
        int age = Integer.valueOf(keyb.nextLine());
        System.out.print("Hello " + name );
        System.out.print(" of " + age + " years" );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:50