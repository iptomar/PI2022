// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha08_005 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        double height = 0.0 ;
        do{
            System.out.print("Height : " );
            height = Double.valueOf(keyb.nextLine());
        }while(height < 0.2 || height > 3.0 );
        System.out.print("Height = " + height );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 23:15
