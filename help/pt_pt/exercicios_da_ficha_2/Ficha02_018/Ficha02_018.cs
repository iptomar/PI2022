// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha02_018 {

    //Main Function
    static void Main() {
        Console.Write("Número real    : " );
        double n1 = double.Parse(Console.ReadLine());
        Console.Write("Número inteiro : " );
        int n2 = int.Parse(Console.ReadLine());
        double r1 = 0 ;
        double r2 = 0 ;
        double r3 = 0 ;
        double r4 = 0 ;
        r1 = n1 + n2 ;
        r2 = n1 - n2 ;
        r3 = n1 * n2 ;
        r4 = n1 / n2 ;
        Console.Write(n1 + " + " + n2 + " = " + r1 );
        Console.Write("\n" + n1 + " - " + n2 + " = " + r2 );
        Console.Write("\n" + n1 + " * " + n2 + " = " + r3 );
        Console.Write("\n" + n1 + " / " + n2 + " = " + r4 );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:44