// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha07_008 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("x : " );
        double x = Double.valueOf(keyb.nextLine());
        System.out.print("g(" + x + ")= " );
        if(x < 1 ){
            x = - Math.pow( x , 2 ) + 1 ;
        }else{
            x--;
        }
        System.out.print(x );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
