// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_002 {

    //Main Function
    static void Main() {
        Console.Write("First value \t: " );
        int n1 = int.Parse(Console.ReadLine());
        Console.Write("Second value \t\t: " );
        int n2 = int.Parse(Console.ReadLine());
        bool equal = n1 == n2 ;
        Console.Write("\n" + n1 + "\t==\t" + n2 + "\t=\t" + equal );
        bool different = n1 != n2 ;
        Console.Write("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + different );
        bool compare = n1 > n2 ;
        Console.Write("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compare );
        compare = n1 >= n2 ;
        Console.Write("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compare );
        Console.Write("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
        Console.Write("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
