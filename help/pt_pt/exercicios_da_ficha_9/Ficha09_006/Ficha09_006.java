// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha09_006 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Limite inferior : " );
        int inf = Integer.valueOf(keyb.nextLine());
        if(inf % 2 == 0 ){
            inf++;
        }
        System.out.print("Limite superior : " );
        int sup = Integer.valueOf(keyb.nextLine());
        while(inf <= sup ){
            System.out.print(inf + " " );
            inf +=2;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
