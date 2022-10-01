// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_002 {

    //Main Function
    static void Main() {
        Console.Write("Summation step 2\n" );
        int sum = 0 ;
        for( int i = 1; i < 10; i = i + 2 ) {
            Console.Write(sum + " + " + i );
            sum +=i;
            Console.Write(" \t= " + sum + "\n" );
        }
        Console.Write("\nSum = " + sum );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
