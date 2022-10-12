// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha11_005 {

    //Main Function
    static void Main() {
        line() ;
        Console.Write("Numbers between 1 and 5\n" );
        line() ;
        for( int i = 1; i < 6; i = i + 1 ) {
            Console.Write(i + "\n" );
        }
        line() ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void line( ){
        for( int i = 0; i < 20; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
