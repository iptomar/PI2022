// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha02_004 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Qual o seu nome \t: " );
        String nome = keyb.nextLine();
        System.out.print("Qual a sua idade \t: " );
        int idade = Integer.valueOf(keyb.nextLine());
        System.out.print("Olá " + nome + " de " + idade + " anos" );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 07 16:09
