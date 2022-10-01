// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_005 {

    //Main Function
    static void Main() {
        Console.Write("Productory\n" );
        int product = 1 ;
        for( int i = 1; i < 5; i = i + 1 ) {
            Console.Write(product + " x " + i );
            product *=i;
            Console.Write(" = " + product + "\n" );
        }
        Console.Write("\nTotal = " + product );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
