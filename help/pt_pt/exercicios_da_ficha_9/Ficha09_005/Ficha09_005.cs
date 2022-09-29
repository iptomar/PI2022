// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha09_005 {

    //Main Function
    static void Main() {
        Console.Write("Limite inferior : " );
        int inf = int.Parse(Console.ReadLine());
        Console.Write("Limite superior : " );
        int sup = int.Parse(Console.ReadLine());
        while(inf <= sup ){
            if(inf % 2 != 0 ){
                Console.Write(inf + " " );
            }
            inf++;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:24
