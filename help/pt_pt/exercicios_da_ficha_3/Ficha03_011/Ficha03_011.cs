// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha03_011 {

    //Main Function
    static void Main() {
        Console.Write("Número inteiro\t: " );
        int n1 = int.Parse(Console.ReadLine());
        Console.Write("Número real \t: " );
        double n2 = double.Parse(Console.ReadLine());
        Console.Write("Números Ordenados" );
        Console.Write("\n" + Math.Min( n1 , n2 ) );
        Console.Write("\n" + Math.Max( n1 , n2 ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
