// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_005 {

    //Main Function
    static void Main() {
        Console.Write("Produtório\n" );
        int produto = 1 ;
        for( int i = 1; i < 5; i = i + 1 ) {
            Console.Write(produto + " x " + i );
            produto *=i;
            Console.Write(" = " + produto + "\n" );
        }
        Console.Write("\nTotal = " + produto );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
