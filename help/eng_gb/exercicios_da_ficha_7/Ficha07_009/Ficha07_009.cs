// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_009 {

    //Main Function
    static void Main() {
        Console.Write("x : " );
        int x = int.Parse(Console.ReadLine());
        Console.Write("f(" + x + ")= " );
        if(x % 2 == 0 ){
            x++;
        }
        Console.Write(x );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
