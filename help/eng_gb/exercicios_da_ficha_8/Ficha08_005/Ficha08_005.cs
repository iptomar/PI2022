// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha08_005 {

    //Main Function
    static void Main() {
        double height = 0.0 ;
        do{
            Console.Write("Height : " );
            height = double.Parse(Console.ReadLine());
        }while(height < 0.2 || height > 3.0 );
        Console.Write("Height = " + height );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 23:15
