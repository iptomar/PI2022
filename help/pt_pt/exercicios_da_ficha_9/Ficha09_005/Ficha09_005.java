// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_005 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Limite inferior : " );
        int inf = Integer.valueOf(keyb.nextLine());
        System.out.print("Limite superior : " );
        int sup = Integer.valueOf(keyb.nextLine());
        while(inf <= sup ){
            if(inf % 2 != 0 ){
                System.out.print(inf + " " );
            }
            inf++;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:24
