// Programador           -

using System.IO;
using System;
public class Ficha11_005 {

    //Main Function
    static void Main() {
        linha() ;
        Console.Write("Numeros entre 1 e 5\n" );
        linha() ;
        for( int i = 1; i < 6; i = i + 1 ) {
            Console.Write(i + "\n" );
        }
        linha() ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( ){
        for( int i = 0; i < 20; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
