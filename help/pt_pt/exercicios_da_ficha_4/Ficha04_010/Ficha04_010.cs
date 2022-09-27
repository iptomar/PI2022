// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_010 {

    //Main Function
    static void Main() {
        Console.Write("Número real \t: " );
        double r1 = double.Parse(Console.ReadLine());
        Console.Write("Número real \t: " );
        double r2 = double.Parse(Console.ReadLine());
        Console.Write("Soma real \t: " );
        double r3 = double.Parse(Console.ReadLine());
        double soma = r1 + r2 ;
        double distancia = Math.Abs( soma - r3 ) ;
        double precisao = 1.0E-5 ;
        Console.Write(r1 + " + " + r2 + " \t= " + r3 + " => " );
        if(distancia < precisao ){
            Console.Write("Verdadeiro" );
        }else{
            Console.Write("Falso" );
        }
        Console.Write("\n\n" + r1 + " + " + r2 + " \t= " + ( r1 + r2 ) );
        Console.Write("\nDistância \t: " + distancia );
        Console.Write("\nPrecisão \t: " + precisao );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
