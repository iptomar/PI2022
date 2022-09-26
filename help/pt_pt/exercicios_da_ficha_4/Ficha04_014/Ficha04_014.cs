// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_014 {

    //Main Function
    static void Main() {
        Console.Write("Tabela de verdade do OU\n" );
        bool var = true || true ;
        Console.Write("\n" + true + "\t||\t" + true + "\t= " + var );
        var = true || false ;
        Console.Write("\n" + true + "\t||\t" + false + "\t\t= " + var );
        var = false || true ;
        Console.Write("\n" + false + "\t\t||\t" + true + "\t= " + var );
        Console.Write("\n" + false + "\t\t||\t" + false + "\t\t= " + ( false || false ) );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
