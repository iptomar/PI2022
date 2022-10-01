// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_014 {

    //Main Function
    static void Main() {
        Console.Write("Decimal : " );
        int num = int.Parse(Console.ReadLine());
        String binary = "" ;
        while(num > 0 ){
            binary = num % 2 + binary ;
            num /=2;
        }
        Console.Write("Binary = " + binary );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
