// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha03_004 {

    //Main Function
    static void Main() {
        Console.Write("Teorema de Pitágoras\n" );
        Console.Write("Cateto a \t: " );
        double a = double.Parse(Console.ReadLine());
        Console.Write("Cateto b \t: " );
        double b = double.Parse(Console.ReadLine());
        double c = Math.Pow( a * a + b * b , 0.5 ) ;
        Console.Write("Hipotnusa \t: " + c );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
