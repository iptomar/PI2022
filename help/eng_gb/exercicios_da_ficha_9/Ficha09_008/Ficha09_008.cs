// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_008 {

    //Main Function
    static void Main() {
        Console.Write("Fibonaci sequence sum\n " );
        int f0 = 1 ;
        int f1 = 1 ;
        Console.Write(f0 + " " + f1 );
        int sum = 2 ;
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            sum +=fn;
            Console.Write(" " + fn );
            f1 = f0 ;
            f0 = fn ;
        }
        Console.Write("\nSum = " + sum );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11