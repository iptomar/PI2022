// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_017 {

    //Main Function
    static void Main() {
        Console.Write("Nota \t: " );
        int nota = int.Parse(Console.ReadLine());
        if(nota < 0 || nota > 20 ){
            Console.Write("Nota inválida" );
        }else{
            Console.Write("Nota válida" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
