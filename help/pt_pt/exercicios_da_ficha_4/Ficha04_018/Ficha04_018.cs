// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_018 {

    //Main Function
    static void Main() {
        Console.Write("\n4 + 2 * 3 ^ 2 - 1\t= " );
        Console.Write(4 + 2 * Convert.ToInt64( Math.Pow( 3 , 2 ) ) - 1 );
        Console.Write("\n2 + 3 > 2 ^ 2  \t= " );
        Console.Write(2 + 3 > Convert.ToInt64( Math.Pow( 2 , 2 ) ) );
        Console.Write("\n2 < 3 && 4 >= 2 \t= " + ( 2 < 3 && 4 >= 2 ) );
        Console.Write("\n2 > 3 || !(4 == 2) \t= " + ( 2 > 3 || ! ( 4 == 2 ) ) );
        bool var = true && ! false || 2 > 3 ;
        Console.Write("\n_T && ! _F || 2 > 3 \t= " + var );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
