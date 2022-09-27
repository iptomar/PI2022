// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_001 {

    //Main Function
    static void Main() {
        Console.Write("Somatório\n" );
        int soma = 0 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            Console.Write(soma + " + " + i );
            soma +=i;
            Console.Write(" \t = " + soma + "\n" );
        }
        Console.Write("\nTotal = " + soma );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
