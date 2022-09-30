// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_009 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Check if the sum of two real values" );
        System.out.print("\nis equal to a third\n" );
        System.out.print("Real 1 \t: " );
        double r1 = Double.valueOf(keyb.nextLine());
        System.out.print("Real 2 \t: " );
        double r2 = Double.valueOf(keyb.nextLine());
        System.out.print("Real 3 \t: " );
        double r3 = Double.valueOf(keyb.nextLine());
        System.out.print(r1 + " + " + r2 + " == " + r3 + " => " );
        if(r1 + r2 == r3 ){
            System.out.print("True" );
        }else{
            System.out.print("False" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
