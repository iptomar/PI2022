// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_009 {

    //Main Function
    static void Main() {
        Console.Write("Check if the sum of two real values" );
        Console.Write("\nis equal to a third\n" );
        Console.Write("Real 1 \t: " );
        double r1 = double.Parse(Console.ReadLine());
        Console.Write("Real 2 \t: " );
        double r2 = double.Parse(Console.ReadLine());
        Console.Write("Real 3 \t: " );
        double r3 = double.Parse(Console.ReadLine());
        Console.Write(r1 + " + " + r2 + " == " + r3 + " => " );
        if(r1 + r2 == r3 ){
            Console.Write("True" );
        }else{
            Console.Write("False" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
