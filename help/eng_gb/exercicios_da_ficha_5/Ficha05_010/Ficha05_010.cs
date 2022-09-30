// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha05_010 {

    //Main Function
    static void Main() {
        int minimum = 999 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            Console.Write(i + "º grade : " );
            int grade = int.Parse(Console.ReadLine());
            if(grade < minimum ){
                minimum = grade ;
            }
        }
        Console.Write("Nota mínima = " + minimum );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
