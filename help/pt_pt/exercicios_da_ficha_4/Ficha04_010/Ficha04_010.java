// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_010 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Número real \t: " );
        double r1 = Double.valueOf(keyb.nextLine());
        System.out.print("Número real \t: " );
        double r2 = Double.valueOf(keyb.nextLine());
        System.out.print("Soma real \t: " );
        double r3 = Double.valueOf(keyb.nextLine());
        double soma = r1 + r2 ;
        double distancia = Math.abs( soma - r3 ) ;
        double precisao = 1.0E-5 ;
        System.out.print(r1 + " + " + r2 + " \t= " + r3 + " => " );
        if(distancia < precisao ){
            System.out.print("Verdadeiro" );
        }else{
            System.out.print("Falso" );
        }
        System.out.print("\n\n" + r1 + " + " + r2 + " \t= " + ( r1 + r2 ) );
        System.out.print("\nDistância \t: " + distancia );
        System.out.print("\nPrecisão \t: " + precisao );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
