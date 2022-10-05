// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha03_002 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Valor de X\t: " );
        double x = Double.valueOf(keyb.nextLine());
        System.out.print("\nRaiz \t\t= " + Math.sqrt( x ) );
        System.out.print("\nPotência \t= " + Math.pow( x , 0.5 ) );
        System.out.print("\nOperador \t= " + Math.pow( x , 0.5 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 05 20:25
