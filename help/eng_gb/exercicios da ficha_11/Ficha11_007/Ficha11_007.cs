// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha11_007 {

    //Main Function
    static void Main() {
        line(3 ) ;
        line(5 ) ;
        line(7 ) ;
        line(5 ) ;
        line(3 ) ;
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
