// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha10_001 {

    //Main Function
    static void Main() {
        int i = 0 ;
        while(true ){
            Console.Write("Número positvo : " );
            i = int.Parse(Console.ReadLine());
            if(i > 0 ){
                break;
            }
            Console.Write("Erro na leitura\n\n" );
        }
        Console.Write("Valor introduzido = " + i );
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:26
