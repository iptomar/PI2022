// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_006 {

    //Main Function
    static void Main() {
        Console.Write("Limite inferior : " );
        int inf = int.Parse(Console.ReadLine());
        if(inf % 2 == 0 ){
            inf++;
        }
        Console.Write("Limite superior : " );
        int sup = int.Parse(Console.ReadLine());
        while(inf <= sup ){
            Console.Write(inf + " " );
            inf +=2;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
