// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Actual number \t: " );
        double r1 = Double.valueOf(keyb.nextLine());
        System.out.print("Actual number \t: " );
        double r2 = Double.valueOf(keyb.nextLine());
        System.out.print("Actual Sum \t: " );
        double r3 = Double.valueOf(keyb.nextLine());
        double sum = r1 + r2 ;
        double distance = Math.abs( sum - r3 ) ;
        double precision = 1.0E-5 ;
        System.out.print(r1 + " + " + r2 + " \t= " + r3 + " => " );
        if(distance < precision ){
            System.out.print("True" );
        }else{
            System.out.print("False" );
        }
        System.out.print("\n\n" + r1 + " + " + r2 + " \t= " + ( r1 + r2 ) );
        System.out.print("\nDistance \t: " + distance );
        System.out.print("\nPrecision \t: " + precision );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
