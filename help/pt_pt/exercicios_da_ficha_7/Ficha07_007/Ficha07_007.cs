// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha07_007 {

    //Main Function
    static void Main() {
        Console.Write("Número de termos : " );
        int n = int.Parse(Console.ReadLine());
        double produto = 1 ;
        for( int i = 1; i < n + 1; i = i + 1 ) {
            double f = Math.Pow( i , 1.0 / 3 ) ;
            produto *=f;
        }
        Console.Write("Resultado = " + produto );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
