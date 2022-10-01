// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_007 {

    //Main Function
    static void Main() {
        int f0 = 1 ;
        int f1 = 1 ;
        Console.Write(f0 + "\n" + f1 + "\n" );
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            Console.Write(fn + "\n" );
            f1 = f0 ;
            f0 = fn ;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
