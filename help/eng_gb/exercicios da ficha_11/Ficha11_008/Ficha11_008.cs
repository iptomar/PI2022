// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha11_008 {

    //Main Function
    static void Main() {
        Console.Write("height : " );
        int Height = int.Parse(Console.ReadLine());
        for( int i = 1; i < Height + 1; i = i + 1 ) {
            line(i ) ;
        }
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void line( int n){
        for( int i = 0; i < n; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
