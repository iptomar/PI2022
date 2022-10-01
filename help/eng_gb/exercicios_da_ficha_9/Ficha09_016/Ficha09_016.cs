// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_016 {

    //Main Function
    static void Main() {
        Console.Write("Numero : " );
        int num = int.Parse(Console.ReadLine());
        int i = 1 ;
        Console.Write("Divisors : " );
        while(i < num ){
            if(num % i == 0 ){
                Console.Write(i + " " );
            }
            i++;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:13
