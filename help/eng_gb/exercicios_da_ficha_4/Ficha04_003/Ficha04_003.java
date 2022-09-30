// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_003 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Grade\t: " );
        int grade = Integer.valueOf(keyb.nextLine());
        if(grade >= 10 ){
            System.out.print("Approved" );
        }else{
            System.out.print("Reproved" );
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
