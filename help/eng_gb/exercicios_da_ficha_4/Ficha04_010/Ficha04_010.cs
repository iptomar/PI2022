// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_010 {

    //Main Function
    static void Main() {
        Console.Write("Actual number \t: " );
        double r1 = double.Parse(Console.ReadLine());
        Console.Write("Actual number \t: " );
        double r2 = double.Parse(Console.ReadLine());
        Console.Write("Actual Sum \t: " );
        double r3 = double.Parse(Console.ReadLine());
        double sum = r1 + r2 ;
        double distance = Math.Abs( sum - r3 ) ;
        double precision = 1.0E-5 ;
        Console.Write(r1 + " + " + r2 + " \t= " + r3 + " => " );
        if(distance < precision ){
            Console.Write("True" );
        }else{
            Console.Write("False" );
        }
        Console.Write("\n\n" + r1 + " + " + r2 + " \t= " + ( r1 + r2 ) );
        Console.Write("\nDistance \t: " + distance );
        Console.Write("\nPrecision \t: " + precision );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
