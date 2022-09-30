// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha03_004 {

    //Main Function
    static void Main() {
        Console.Write("Pythagorean Theorem\n" );
        Console.Write("Catet a \t: " );
        double a = double.Parse(Console.ReadLine());
        Console.Write("Catet b \t: " );
        double b = double.Parse(Console.ReadLine());
        double c = Math.Pow( a * a + b * b , 0.5 ) ;
        Console.Write("Hypotnusa \t: " + c );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:55
