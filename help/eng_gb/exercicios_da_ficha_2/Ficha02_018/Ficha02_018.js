// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Real number : " );// print text
    n1 = parseFloat(prompt("Real number : " ,"0.0") );
    
    document.write(n1 + "\n");// print input 
    document.write("Integer  : " );// print text
    n2 = parseInt(prompt("Integer  : " ,"0") );
    
    document.write(n2 + "\n");// print input 
    var r1 = 0 ;
    var r2 = 0 ;
    var r3 = 0 ;
    var r4 = 0 ;
    r1 = n1 + n2 ;
    r2 = n1 - n2 ;
    r3 = n1 * n2 ;
    r4 = n1 / n2 ;
    document.write(n1 + " + " + n2 + " = " + r1 );
    document.write("\n" + n1 + " - " + n2 + " = " + r2 );
    document.write("\n" + n1 + " * " + n2 + " = " + r3 );
    document.write("\n" + n1 + " / " + n2 + " = " + r4 );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:53