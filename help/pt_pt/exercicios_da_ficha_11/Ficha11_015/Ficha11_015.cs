// Programador           -

using System.IO;
using System;
public class Ficha11_015 {

    //Main Function
    static void Main() {
        Console.Write("Altura   : " );
        int altura = int.Parse(Console.ReadLine());
        Console.Write("Largura  : " );
        int largura = int.Parse(Console.ReadLine());
        Console.Write("Limite   : " );
        String limite = Console.ReadLine();
        Console.Write("Interior : " );
        String interior = Console.ReadLine();
        caixa(largura , altura , limite , interior ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( int n , String c){
        for( int i = 0; i < n; i = i + 1 ) {
            Console.Write(c );
        }
        Console.Write("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void interior( int n , String cl , String ci){
        Console.Write(cl );
        for( int i = 1; i < n - 1; i = i + 1 ) {
            Console.Write(ci );
        }
        Console.Write(cl + "\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void caixa( int larg , int alt , String cl , String ci){
        linha(larg , cl ) ;
        for( int i = 1; i < alt - 1; i = i + 1 ) {
            interior(larg , cl , ci ) ;
        }
        linha(larg , cl ) ;
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
