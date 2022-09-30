// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_005 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Number \t: " );
        int num = Integer.valueOf(keyb.nextLine());
        if(num == 0 ){
            System.out.print("Null" );
        }else{
            if(num > 0 ){
                System.out.print("Positive" );
            }else{
                System.out.print("Negative" );
            }
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
