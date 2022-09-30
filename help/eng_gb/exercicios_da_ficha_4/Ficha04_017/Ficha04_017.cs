// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

using System.IO;
using System;
public class Ficha04_017 {

    //Main Function
    static void Main() {
        Console.Write("Grade \t: " );
        int grade = int.Parse(Console.ReadLine());
        if(grade < 0 || grade > 20 ){
            Console.Write("Invalid Grade" );
        }else{
            Console.Write("Valid Grade" );
        }
    }

}
//C#  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:29
