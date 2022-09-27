// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_005 {

    //Main Function
    static void Main() {
        Console.Write("Número \t: " );
        int num = int.Parse(Console.ReadLine());
        if(num == 0 ){
            Console.Write("Nulo" );
        }else{
            if(num > 0 ){
                Console.Write("Positivo" );
            }else{
                Console.Write("Negativo" );
            }
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
