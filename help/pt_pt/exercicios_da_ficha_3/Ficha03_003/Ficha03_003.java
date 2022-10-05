// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_003 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Valor de X\t: " );
        double x = Double.valueOf(keyb.nextLine());
        System.out.print("Exponencial \t= " + Math.exp( x ) );
        System.out.print("\nPotencia \t= " + Math.pow( Math.E , x ) );
        System.out.print("\nOperador \t= " + Math.pow( Math.E , x ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 05 20:26
