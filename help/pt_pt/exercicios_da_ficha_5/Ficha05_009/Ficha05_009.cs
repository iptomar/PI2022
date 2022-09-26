// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha05_009 {

    //Main Function
    static void Main() {
        Console.Write("Minimo : " );
        int imin = int.Parse(Console.ReadLine());
        Console.Write("Maximo : " );
        int imax = int.Parse(Console.ReadLine());
        if(imin % 2 != 0 ){
            imin++;
        }
        for( int i = imin; i < imax + 1; i = i + 2 ) {
            Console.Write(i + " " );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03
