// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha08_005 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        double altura = 0.0 ;
        do{
            System.out.print("Altura : " );
            altura = Double.valueOf(keyb.nextLine());
        }while(altura < 0.2 || altura > 3.0 );
        System.out.print("Altura = " + altura );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:17
