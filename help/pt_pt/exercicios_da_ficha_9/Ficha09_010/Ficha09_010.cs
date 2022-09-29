// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_010 {

    //Main Function
    static void Main() {
        Console.Write("Numero : " );
        int num = int.Parse(Console.ReadLine());
        Console.Write("Digitos = " );
        while(num > 0 ){
            Console.Write(num % 10 + " " );
            num /=10;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
