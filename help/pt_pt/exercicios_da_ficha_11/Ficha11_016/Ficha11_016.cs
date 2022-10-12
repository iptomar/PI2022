// Programador           -

using System.IO;
using System;
public class Ficha11_016 {

    //Main Function
    static void Main() {
        Console.Write("Altura   : " );
        int alt = int.Parse(Console.ReadLine());
        Console.Write("Caractér : " );
        String char = Console.ReadLine();
        copa(alt , char ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linhaCopa( int sp , int chars , String txt){
        for( int i = 0; i < sp; i = i + 1 ) {
            Console.Write(" " );
        }
        for( int i = 0; i < chars; i = i + 1 ) {
            Console.Write(txt );
        }
        Console.Write("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void copa( int alt , String txt){
        for( int i = 1; i < alt + 1; i = i + 1 ) {
            int sp = alt - i ;
            int chrs1 = i * 2 - 1 ;
            linhaCopa(sp , chrs1 , txt ) ;
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:15
