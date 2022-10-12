// Programador           -

using System.IO;
using System;
public class Ficha11_014 {

    //Main Function
    static void Main() {
        Console.Write("Altura  : " );
        int altura = int.Parse(Console.ReadLine());
        Console.Write("Largura : " );
        int largura = int.Parse(Console.ReadLine());
        caixa(largura , altura ) ;
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
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void interior( int n){
        Console.Write("*" );
        for( int i = 1; i < n - 1; i = i + 1 ) {
            Console.Write(" " );
        }
        Console.Write("*\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void caixa( int larg , int alt){
        linha(larg ) ;
        for( int i = 1; i < alt - 1; i = i + 1 ) {
            interior(larg ) ;
        }
        linha(larg ) ;
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
