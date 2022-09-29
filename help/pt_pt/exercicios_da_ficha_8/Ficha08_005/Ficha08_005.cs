// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha08_005 {

    //Main Function
    static void Main() {
        double altura = 0.0 ;
        do{
            Console.Write("Altura : " );
            altura = double.Parse(Console.ReadLine());
        }while(altura < 0.2 || altura > 3.0 );
        Console.Write("Altura = " + altura );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:17
