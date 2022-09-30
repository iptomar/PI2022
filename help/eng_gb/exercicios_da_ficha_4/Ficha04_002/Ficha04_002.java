// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import java.util.Scanner;

public class Ficha04_002 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("First value \t: " );
        int n1 = Integer.valueOf(keyb.nextLine());
        System.out.print("Second value \t\t: " );
        int n2 = Integer.valueOf(keyb.nextLine());
        boolean equal = n1 == n2 ;
        System.out.print("\n" + n1 + "\t==\t" + n2 + "\t=\t" + equal );
        boolean different = n1 != n2 ;
        System.out.print("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + different );
        boolean compare = n1 > n2 ;
        System.out.print("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compare );
        compare = n1 >= n2 ;
        System.out.print("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compare );
        System.out.print("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
        System.out.print("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
