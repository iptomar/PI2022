// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha03_022 {

    //Main Function
    static void Main() {
        Console.Write("Ângulo \t\t\t: " );
        double ang = double.Parse(Console.ReadLine());
        Console.Write("Seno hiperbólico \t= " + Math.Sinh( ang ) + "\n" );
        Console.Write("Coseno hiperbólico \t= " + Math.Cosh( ang ) + "\n" );
        Console.Write("Tangente hiperbólica \t= " + Math.Tanh( ang ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:33
