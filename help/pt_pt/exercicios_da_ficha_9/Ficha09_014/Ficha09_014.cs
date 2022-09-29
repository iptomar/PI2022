// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_014 {

    //Main Function
    static void Main() {
        Console.Write("Decimal : " );
        int num = int.Parse(Console.ReadLine());
        String binario = "" ;
        while(num > 0 ){
            binario = num % 2 + binario ;
            num /=2;
        }
        Console.Write("Binario = " + binario );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:26
