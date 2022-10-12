// Programador           -

using System.IO;
using System;
public class Ficha11_006 {

    //Main Function
    static void Main() {
        linha3() ;
        linha5() ;
        linha7() ;
        linha5() ;
        linha3() ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha3( ){
        for( int i = 0; i < 3; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha5( ){
        for( int i = 0; i < 5; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha7( ){
        for( int i = 0; i < 7; i = i + 1 ) {
            Console.Write("*" );
        }
        Console.Write("\n" );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
