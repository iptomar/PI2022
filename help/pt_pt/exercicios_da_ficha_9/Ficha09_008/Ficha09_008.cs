// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_008 {

    //Main Function
    static void Main() {
        Console.Write("Soma da sequência de fibonacci\n " );
        int f0 = 1 ;
        int f1 = 1 ;
        Console.Write(f0 + " " + f1 );
        int soma = 2 ;
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            soma +=fn;
            Console.Write(" " + fn );
            f1 = f0 ;
            f0 = fn ;
        }
        Console.Write("\nSoma = " + soma );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
