// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha02_011 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        int n1 = 0 ;
        int n2 = 0 ;
        System.out.print("1º número : " );
        n1 = Integer.valueOf(keyb.nextLine());
        System.out.print("2º número : " );
        n2 = Integer.valueOf(keyb.nextLine());
        int soma = n1 + n2 ;
        System.out.print(n1 + " + " + n2 + " = " + soma );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 07 16:11
