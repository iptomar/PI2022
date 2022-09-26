// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_012 {

    //Main Function
    static void Main() {
        Console.Write("Real 1 \t: " );
        double r1 = double.Parse(Console.ReadLine());
        Console.Write("Real 2 \t: " );
        double r2 = double.Parse(Console.ReadLine());
        Console.Write("\nOrdem decrescente\n" );
        if(r1 > r2 ){
            Console.Write(r1 + "\t" + r2 );
        }else{
            Console.Write(r2 + "\t" + r1 );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
