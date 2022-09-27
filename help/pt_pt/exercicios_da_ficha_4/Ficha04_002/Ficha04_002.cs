// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_002 {

    //Main Function
    static void Main() {
        Console.Write("Primeiro valor \t: " );
        int n1 = int.Parse(Console.ReadLine());
        Console.Write("Segundo valor \t\t: " );
        int n2 = int.Parse(Console.ReadLine());
        bool igual = n1 == n2 ;
        Console.Write("\n" + n1 + "\t==\t" + n2 + "\t=\t" + igual );
        bool diferente = n1 != n2 ;
        Console.Write("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + diferente );
        bool compara = n1 > n2 ;
        Console.Write("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compara );
        compara = n1 >= n2 ;
        Console.Write("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compara );
        Console.Write("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
        Console.Write("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:30
