// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_011 {

    //Main Function
    static void Main() {
        Console.Write("Number : " );
        int num = int.Parse(Console.ReadLine());
        Console.Write("Bits = " );
        while(num > 0 ){
            Console.Write(num % 2 + " " );
            num /=2;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
