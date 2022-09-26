// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_011 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Real 1 \t: " );
        double r1 = Double.valueOf(keyb.nextLine());
        System.out.print("Real 2 \t: " );
        double r2 = Double.valueOf(keyb.nextLine());
        System.out.print("\nOrdem crescente\n" );
        if(r1 < r2 ){
            System.out.print(r1 + "\t" + r2 );
        }else{
            System.out.print(r2 + "\t" + r1 );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
