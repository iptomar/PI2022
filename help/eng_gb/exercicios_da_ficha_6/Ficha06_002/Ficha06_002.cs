// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha06_002 {

    //Main Function
    static void Main() {
        Console.Write("Height : " );
        int height = int.Parse(Console.ReadLine());
        for( int i = 0; i < height; i = i + 1 ) {
            for( int j = 0; j < height; j = j + 1 ) {
                Console.Write("*" );
            }
            Console.Write("\n" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:55
