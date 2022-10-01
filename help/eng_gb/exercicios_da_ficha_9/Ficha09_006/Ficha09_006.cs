// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_006 {

    //Main Function
    static void Main() {
        Console.Write("Inferior limit : " );
        int inf = int.Parse(Console.ReadLine());
        if(inf % 2 == 0 ){
            inf++;
        }
        Console.Write("Upper limit : " );
        int sup = int.Parse(Console.ReadLine());
        while(inf <= sup ){
            Console.Write(inf + " " );
            inf +=2;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
