// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_014 {

    //Main Function
    static void Main() {
        Console.Write("Truth table of OR\n" );
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
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
