// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha11_009 {

    //Main Function
    static void Main() {
        Console.Write("Height : " );
        int height = int.Parse(Console.ReadLine());
        triangle(height ) ;
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
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void triangle( int height){
        for( int i = 1; i < height + 1; i = i + 1 ) {
            line(i ) ;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:23
