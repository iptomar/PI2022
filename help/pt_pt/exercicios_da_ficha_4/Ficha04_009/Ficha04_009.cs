// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_009 {

    //Main Function
    static void Main() {
        Console.Write("Verificar se a soma de dois valores reais" );
        Console.Write("\né igual a um terceiro\n" );
        Console.Write("Real 1 \t: " );
        double r1 = double.Parse(Console.ReadLine());
        Console.Write("Real 2 \t: " );
        double r2 = double.Parse(Console.ReadLine());
        Console.Write("Real 3 \t: " );
        double r3 = double.Parse(Console.ReadLine());
        Console.Write(r1 + " + " + r2 + " == " + r3 + " => " );
        if(r1 + r2 == r3 ){
            Console.Write("Verdadeiro" );
        }else{
            Console.Write("Falso" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
