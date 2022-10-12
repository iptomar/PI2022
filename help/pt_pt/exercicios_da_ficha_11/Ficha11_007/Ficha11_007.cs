// Programador           -

using System.IO;
using System;
public class Ficha11_007 {

    //Main Function
    static void Main() {
        linha(3 ) ;
        linha(5 ) ;
        linha(7 ) ;
        linha(5 ) ;
        linha(3 ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( int n){
        for( int i = 0; i < n; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
