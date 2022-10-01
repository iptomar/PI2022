// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_008 {

    //Main Function
    static void Main() {
        Console.Write("x : " );
        double x = double.Parse(Console.ReadLine());
        Console.Write("g(" + x + ")= " );
        if(x < 1 ){
            x = - Math.Pow( x , 2 ) + 1 ;
        }else{
            x--;
        }
        Console.Write(x );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
