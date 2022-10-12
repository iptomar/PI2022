// Programador           -

using System.IO;
using System;
public class Ficha11_018 {

    //Main Function
    static void Main() {
        int alt = 0 ;
        while(true ){
            Console.Write("Altura   : " );
            alt = int.Parse(Console.ReadLine());
            if(alt % 2 == 0 && alt >= 4 ){
                break;
            }
            Console.Write("\tValor errado\n" );
        }
        Console.Write("Caractér : " );
        String txt = Console.ReadLine();
        copa(alt / 2 , txt ) ;
        tronco(alt / 2 , txt ) ;
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
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void tronco( int n , String ch){
        for( int i = 0; i < n; i = i + 1 ) {
            for( int j = 0; j < n - 1; j = j + 1 ) {
                Console.Write(" " );
            }
            Console.Write(ch + "\n" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
