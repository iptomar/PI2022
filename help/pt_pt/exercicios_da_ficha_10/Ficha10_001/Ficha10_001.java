// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha10_001 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        int i = 0 ;
        while(true ){
            System.out.print("Número positvo : " );
            i = Integer.valueOf(keyb.nextLine());
            if(i > 0 ){
                break;
            }
            System.out.print("Erro na leitura\n\n" );
        }
        System.out.print("Valor introduzido = " + i );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:26
