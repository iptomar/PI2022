// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_005 {

    //Main Function
    static void Main() {
        Console.Write("Number \t: " );
        int num = int.Parse(Console.ReadLine());
        if(num == 0 ){
            Console.Write("Null" );
        }else{
            if(num > 0 ){
                Console.Write("Positive" );
            }else{
                Console.Write("Negative" );
            }
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
