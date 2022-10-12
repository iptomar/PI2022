// Programador           -

using System.IO;
using System;
public class Ficha11_011 {

    //Main Function
    static void Main() {
        Console.Write("Altura : " );
        int altura = int.Parse(Console.ReadLine());
        Console.Write("Caractér : " );
        String c = Console.ReadLine();
        quadradoC(altura , c ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linhaC( int n , String c){
        for( int i = 0; i < n; i = i + 1 ) {
            Console.Write(c );
        }
        Console.Write("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void quadradoC( int altura , String c){
        for( int i = 1; i < altura + 1; i = i + 1 ) {
            linhaC(altura , c ) ;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:11
