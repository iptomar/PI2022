// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_003 {

    //Main Function
    static void Main() {
        Console.Write("Formula Summation\n" );
        int sum = 0 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            int f = 2 * i - 1 ;
            Console.Write(sum + " + " + f );
            sum +=f;
            Console.Write(" \t= " + sum + "\n" );
        }
        Console.Write("\nSum= " + sum );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
