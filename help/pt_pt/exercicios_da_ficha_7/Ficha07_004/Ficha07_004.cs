// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_004 {

    //Main Function
    static void Main() {
        Console.Write("Somatório Pares [0,10]\n" );
        int soma = 0 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            int f = 2 * i ;
            Console.Write(soma + " + " + f );
            soma +=f;
            Console.Write(" = " + soma + "\n" );
        }
        Console.Write("\nSoma = " + soma );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
