// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Primeiro valor \t: " );// print text
    n1 = parseInt(prompt("Primeiro valor \t: " ,"0") );
    
    document.write(n1 + "\n");// print input 
    document.write("Segundo valor \t\t: " );// print text
    n2 = parseInt(prompt("Segundo valor \t\t: " ,"0") );
    
    document.write(n2 + "\n");// print input 
    var igual = n1 == n2 ;
    document.write("\n" + n1 + "\t==\t" + n2 + "\t=\t" + igual );
    var diferente = n1 != n2 ;
    document.write("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + diferente );
    var compara = n1 > n2 ;
    document.write("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compara );
    compara = n1 >= n2 ;
    document.write("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compara );
    document.write("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
    document.write("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:30
