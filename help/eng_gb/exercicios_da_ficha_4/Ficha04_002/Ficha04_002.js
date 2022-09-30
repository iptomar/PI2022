// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("First value \t: " );// print text
    n1 = parseInt(prompt("First value \t: " ,"0") );
    
    document.write(n1 + "\n");// print input 
    document.write("Second value \t\t: " );// print text
    n2 = parseInt(prompt("Second value \t\t: " ,"0") );
    
    document.write(n2 + "\n");// print input 
    var equal = n1 == n2 ;
    document.write("\n" + n1 + "\t==\t" + n2 + "\t=\t" + equal );
    var different = n1 != n2 ;
    document.write("\n" + n1 + "\t!=\t" + n2 + "\t=\t" + different );
    var compare = n1 > n2 ;
    document.write("\n" + n1 + "\t>\t" + n2 + "\t=\t" + compare );
    compare = n1 >= n2 ;
    document.write("\n" + n1 + "\t>=\t" + n2 + "\t=\t" + compare );
    document.write("\n" + n1 + "\t<\t" + n2 + "\t=\t" + ( n1 < n2 ) );
    document.write("\n" + n1 + "\t<=\t" + n2 + "\t=\t" + ( n1 <= n2 ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
