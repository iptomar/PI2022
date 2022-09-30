// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha02_017 {

    //Main Function
    static void Main() {
        Console.Write("1st number :" );
        double n1 = double.Parse(Console.ReadLine());
        Console.Write("2nd number :" );
        int n2 = int.Parse(Console.ReadLine());
        Console.Write(n1 + " + " + n2 + " = " + ( n1 + n2 ) );
        Console.Write("\n" + n1 + " - " + n2 + " = " + ( n1 - n2 ) );
        Console.Write("\n" + n1 + " * " + n2 + " = " + ( n1 * n2 ) );
        Console.Write("\n" + n1 + " / " + n2 + " = " + ( n1 / n2 ) );
        Console.Write("\n" + n1 + " ^ " + n2 + " = " + ( Math.Pow( n1 , n2 ) ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:53
