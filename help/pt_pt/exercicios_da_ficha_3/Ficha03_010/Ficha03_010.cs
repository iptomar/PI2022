// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha03_010 {

    //Main Function
    static void Main() {
        Console.Write("Valor de X\t\t: " );
        double x = double.Parse(Console.ReadLine());
        double logX = Math.Log10( x ) ;
        Console.Write("Log10(X) \t\t= " + logX );
        double pow10 = Math.Pow( 10 , logX ) ;
        Console.Write("\nPow10(Log10(X)) \t= " + pow10 );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
